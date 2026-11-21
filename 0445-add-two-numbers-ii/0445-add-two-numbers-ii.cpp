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
    ListNode* reverse(ListNode* head){
        ListNode* curr=head;
        ListNode* prev=nullptr;
        ListNode* next=nullptr;
        while(curr!=nullptr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverse(l1);
        l2=reverse(l2);
        ListNode* dummy=new ListNode(0);
        ListNode* curr3=dummy;
        ListNode* curr1=l1;
        ListNode* curr2=l2;
        int c=0;
        while(curr1!=NULL && curr2!=NULL){
            int sum=(curr1->val+curr2->val+c)%10;
            c=(curr1->val+curr2->val+c)/10;
            curr3->next=new ListNode(sum);
            curr3=curr3->next;
            curr1=curr1->next;
            curr2=curr2->next;
        }
        while(curr1!=NULL){
            int sum=(curr1->val+c)%10;
            c=(curr1->val+c)/10;
            curr3->next=new ListNode(sum);
            curr3=curr3->next;
            curr1=curr1->next;
        }
        while(curr2!=NULL){
            int sum=(curr2->val+c)%10;
            c=(curr2->val+c)/10;
            curr3->next=new ListNode(sum);
            curr3=curr3->next;
            curr2=curr2->next;
        }
        if(c!=0){
            curr3->next=new ListNode(c);
        }
        return reverse(dummy->next);
    }
};