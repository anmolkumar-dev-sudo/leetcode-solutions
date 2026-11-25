#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        ListNode* curr = head;
        while(curr != NULL){
            len++;
            curr = curr->next;
        }
        
        int s = len - n;
        if(s == 0){
            return head->next;
        }
        
        len = 1;
        curr = head;
        while(len != s){
            len++;
            curr = curr->next;
        }
        
        curr->next = curr->next->next;
        return head;
    }
};