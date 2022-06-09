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
    ListNode* insertionSortList(ListNode* head) {
        ListNode * dummy= new ListNode(1000);
        while(head!=NULL)
        {
            ListNode* forw=head->next;
            ListNode* temp=dummy;
            while(temp->next!=NULL && temp->next->val< head->val)
            {
                temp=temp->next;
            }
          //  cout<<head->val;
            head->next=temp->next;
            temp->next=head;
            head=forw;
        }
        return dummy->next;
        
    }
};