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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* first = head;
        int count=0;
        while(first != NULL){
            count += 1;
            first = first->next;
        }
        int x = (count-n) + 1;
        int z = 0;
        ListNode* temp = new ListNode();
        ListNode* cur = new ListNode();
        if(count == n){
            return head->next;
        }

        else{
            cur = head;
          
            while(cur != NULL){
                z += 1;
                if(z == x-1){
                    temp = cur->next;
                    cur->next = temp->next;
                    delete temp;
                    temp = NULL;                 
                }
                else{
                    cur = cur->next;
                }
            }
        }
        return head;   
    }     
};
