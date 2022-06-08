/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    void copylist(Node* head)
    {
        Node* curr=head;
        while(curr!=NULL)
        {
            Node * forw=curr->next;
            Node * node=new Node(curr->val);
            curr->next=node;
            node->next=forw;
            curr=forw;
            
        }
    }
    void copyrandom(Node*head)
    {
        Node *curr=head;
        while(curr!=NULL)
        {
            Node* random=curr->random;
            if(random!=NULL)
            {
                curr->next->random=random->next;
            }
            curr=curr->next->next;
        }
    }
    Node* copypointer(Node*head)
    {
        Node* dummy=new Node(-1);
        Node* prev=dummy;
        Node* curr=head;
        while(curr!=NULL)
        {
            prev->next=curr->next;
            curr->next=curr->next->next;
            prev=prev->next;
            curr=curr->next;
        }
        return dummy->next;
    }
    Node* copyRandomList(Node* head) {
        copylist(head);
        copyrandom(head);
        return copypointer(head);
        
    }
};