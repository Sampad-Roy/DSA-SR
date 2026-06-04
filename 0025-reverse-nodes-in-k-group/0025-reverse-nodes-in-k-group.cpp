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
    ListNode* reverseKGroup(ListNode* head, int k) {

    //Author: s_ampad_404

    ListNode* curr=head;
    int cnt=0;
    while(cnt<k)
    {   
        if(curr==NULL)
        {
             return head;
        }
        curr=curr->next;
        cnt++;
    }

    ListNode* pre=reverseKGroup(curr , k);

    curr=head,cnt=0;

    //reverse Curr

    while(cnt<k)
    {
        ListNode* temp=curr->next;
        curr->next=pre;
        pre=curr;
        curr=temp;
        cnt++;
    }


    return pre;


    }
};