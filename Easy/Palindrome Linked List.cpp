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
    bool isPalindrome(ListNode* head) {
        ListNode *ptr = head;
        string pal = "";
        while(ptr!=NULL){
            pal += ptr->val;
            ptr = ptr->next;
        }
        int n = pal.length();
        string rev="";
        while(n--){
            rev += pal[n];
        }
        if(pal == rev){
            return true;
        }else{
            return false;
        }      
    }
};
