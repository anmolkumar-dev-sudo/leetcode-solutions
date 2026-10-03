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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* c1=l1;
        ListNode *c2=l2;
        int carry=0;
        ListNode* dummy=new ListNode(0);
        ListNode* curr=dummy;
        while(c1!=NULL || c2!=NULL|| carry!=0){
            int x=0,y=0;
            if(c1!=NULL){
                x=c1->val;
                c1=c1->next;
            }
            if(c2!=NULL){
                y=c2->val;
                c2=c2->next;
            }
            int sum=(x)+(y)+carry;
            carry=sum/10;
            int digit=sum%10;
            ListNode* newNode=new ListNode(digit);
            curr->next=newNode;
            curr=newNode;
            
        }
        ListNode* head=dummy->next;
        return head;
    }
};