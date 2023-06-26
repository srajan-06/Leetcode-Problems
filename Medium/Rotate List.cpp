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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* cur = head;
        if(head==NULL || head->next==NULL){
            return head;
        }
        int count=0;
        while(cur){
            count += 1;
            cur = cur->next;
        }
        cur = head;
        k %= count;

        if(k==0){
            return head;
        }

        while(k--){
            cur = cur->next;
        }
        ListNode* tmpHead = head;

        while(cur->next!=NULL){
            cur = cur->next;
            head = head->next;
        }
        ListNode* newHead = head->next;
        cur->next = tmpHead;
        head->next = NULL;
        return newHead;
        
    }
};
