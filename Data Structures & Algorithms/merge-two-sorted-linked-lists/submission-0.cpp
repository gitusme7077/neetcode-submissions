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
    struct List{
        ListNode* head = NULL;
        ListNode* tail = NULL;
        void push_back(int val){
            ListNode* newNode = new ListNode(val);
            if(head==NULL){
                head = tail = newNode;
            }else{
                tail->next=newNode;
                tail = newNode;
            }
        }
    };
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        List ans;
        ListNode* i = list1;
        ListNode* j = list2;
        while(i!=NULL&&j!=NULL){
            if(i->val<=j->val){
                ans.push_back(i->val);
                i=i->next;
            }else{
                ans.push_back(j->val);
                j=j->next;
            }
        }
        while(i!=NULL){
            ans.push_back(i->val);
            i=i->next;

        }
        while(j!=NULL){
            ans.push_back(j->val);
            j=j->next;

        }
        return ans.head;
        
    }
};
