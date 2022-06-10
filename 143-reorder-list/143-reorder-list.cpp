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
    ListNode* reverse(ListNode* head)
    {
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* temp;
        while(curr!=NULL)
        {
             temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
            
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return;
        }
       ListNode* slow=head;
        ListNode* fast=head;
        ListNode * prev=NULL;
        while(fast!=NULL && fast->next!=NULL)
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=NULL;  // 1-2-NULL
        ListNode *rev=reverse(slow);    // 4-3
        slow=head;
        ListNode* dummy= new ListNode(-1);
        ListNode* tail=dummy;
        while(head!=NULL)
        {
            ListNode* headnext=head->next;
                ListNode* revnext=rev->next;
            tail->next=head;
            tail=tail->next;
            tail->next=rev;
            tail=tail->next;
            head=headnext;
            rev=revnext;
        }
        
    }
};