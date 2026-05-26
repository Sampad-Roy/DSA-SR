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
    bool isPalindrome(ListNode* head) {

        ListNode node(0);
        ListNode* point=&node;
        
        ListNode* curr=head;
        
        while(curr!=NULL)
        {

           ListNode* newnode=new ListNode(curr->val);
           newnode->next=point->next;
           point->next=newnode;
           curr=curr->next; 
        }
        
        
        curr=head;
        ListNode* temp=point->next;

        while(curr!=NULL)
        {
            if(curr->val != temp->val)
            {
                return false;
            }

            curr=curr->next;
            temp=temp->next;
        }

        return true;

        
    }
};