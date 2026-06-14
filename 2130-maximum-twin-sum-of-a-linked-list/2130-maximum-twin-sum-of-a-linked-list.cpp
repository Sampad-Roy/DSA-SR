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
    int pairSum(ListNode* head) {

        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }


        ListNode* curr=slow;

        ListNode* pre=NULL;
        ListNode* next=NULL;

        while(curr!=NULL)
        {
          next=curr->next;
          curr->next=pre;
          pre=curr;
          curr=next;
        }

        int ans=INT_MIN;
        ListNode* curr1=head;
        while(pre!=NULL)
        {
             ans=max(ans,int((curr1->val) + (pre->val)));
             curr1=curr1->next;
             pre=pre->next;
        }
      
      return ans;
        
    }
};