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
    Node* copyRandomList(Node* head) {


        Node newnode(0);
        Node* tail=&newnode;

        Node* curr=head;
        unordered_map<Node*, Node*>mp;
        while(curr!=NULL)
        {
           Node* copy = new Node(curr->val);
           tail->next=copy;
           mp[curr]=copy;
           tail=tail->next;
           curr=curr->next;
        }



        curr=head;
        Node* copy1=newnode.next;
        while(curr!=NULL)
        { 
         copy1->random = mp[curr->random];
         curr=curr->next;
         copy1=copy1->next;
        }
        


        return  newnode.next;







        
    }
};