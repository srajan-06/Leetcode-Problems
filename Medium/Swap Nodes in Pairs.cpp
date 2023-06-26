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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* cur = dummy;
        if(head==NULL or head->next==NULL){
            return head;
        }
        while(cur->next!=NULL && cur->next->next!=NULL){
            ListNode* first = cur->next;
            ListNode* second = cur->next->next;

            first->next = second->next;
            cur->next = second;
            cur->next->next = first;
            cur = first;
        }
        return dummy->next;
    }
};
