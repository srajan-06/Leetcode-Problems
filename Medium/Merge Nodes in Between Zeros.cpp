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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *merge = new ListNode(0);
        ListNode *cur = merge;
        ListNode *temp = head;

        temp = temp->next;

        int sum=0;
        while(temp!=NULL){
            while(temp->val!=NULL){
                sum += temp->val;
                temp = temp->next;
            }

            cur->next = new ListNode(sum);
            cur = cur->next;
            sum = 0;
            temp = temp->next;
        }

        return merge->next;
    }
};
