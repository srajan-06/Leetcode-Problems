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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* temp = head;
        ListNode* cur = head->next;
        while(cur != NULL){
            if(temp->val == cur->val){
                ListNode* t = cur;
                temp->next = cur->next;
                cur = cur->next;
                delete t;
            }else{
                temp = cur;
                cur = cur->next;
            }
        }
        return head;
    }
};
