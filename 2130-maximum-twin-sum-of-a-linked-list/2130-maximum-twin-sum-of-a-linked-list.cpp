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
        vector<int>a;

        ListNode* curr=head;
        while(curr)
        {
            a.push_back(curr->val);
            curr=curr->next;
        }
        int ans=INT_MIN;
        for(int i=0; i<=(a.size()/2)-1; i++)
        {
            int sum=0;
            int x=a[i];
            int y=a[a.size()-1-i];
            sum+=(x+y);
            ans=max(ans,sum);
        }

        return ans;
        


    }
};