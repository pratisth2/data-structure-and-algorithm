/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    
    void dfs(Node* copy, Node* node, vector<Node*>&vis){
        vis[copy->val]=copy;
        for(auto t : node->neighbors){
           if(vis[t->val]==NULL){
               Node* temp=new Node(t->val);
              (copy->neighbors).push_back(temp);
               dfs(temp,t,vis);
           } 
            else
                copy->neighbors.push_back(vis[t->val]);
        }
    }
public:
    Node* cloneGraph(Node* node) {
        if(node==NULL)
            return NULL;
        vector<Node*>vis(1000,NULL);
        Node* copy=new Node(node->val);
        dfs(copy,node,vis);
        return copy;   
    }
};