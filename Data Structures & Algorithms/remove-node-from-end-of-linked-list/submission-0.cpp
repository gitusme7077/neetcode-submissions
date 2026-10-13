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
private:
    int getSize(ListNode* head){
        int sz = 0;
        ListNode* temp=head;
        while(temp!=NULL){
            temp = temp -> next;
            sz++;
        }
        return sz;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = getSize(head);
        if(size==n){
            return head -> next;
        }
        ListNode* prev = head;
        for(int i=1;i<size-n;i++){
            prev = prev -> next;
        }
        prev -> next = prev -> next -> next;
        return head;
        
    }
};
