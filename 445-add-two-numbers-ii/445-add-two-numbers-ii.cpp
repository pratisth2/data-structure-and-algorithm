/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
   
    ListNode * adddigit(ListNode*l1, ListNode*l2, int&carry)
    {
       
        if(l1==NULL && l2==NULL) return NULL;
        
             ListNode* newhead=new ListNode(-1);
        
            newhead->next=adddigit(l1->next, l2->next, carry);
            newhead->val=(l1->val+l2->val+ carry)%10;
            carry=(l1->val+l2->val+carry)/10;
         
          return newhead;  
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode* ptr1=l1, *ptr2=l2;
        while(ptr1!=NULL || ptr2!=NULL)
        {
            if(ptr1==NULL)
            {
                ListNode * newnode= new ListNode(0);
                newnode->next=l1;
                l1=newnode;
                ptr2=ptr2->next;
                
            }
           else if(ptr2==NULL)
            {
                ListNode * newnode= new ListNode(0);
                newnode->next=l2;
                l2=newnode;
                ptr1=ptr1->next;
                
            }
            else
            {
                ptr1=ptr1->next;
                ptr2=ptr2->next;
            }
        }
            int carry = 0;
        ListNode *dummy = new ListNode(-1);
        dummy->next = adddigit(l1, l2, carry);
        if(carry != 0)
        {
            ListNode *newNode = new ListNode(carry);
            newNode->next = dummy->next;
            dummy->next = newNode;
        }
        
        return dummy->next;
    }
    
};