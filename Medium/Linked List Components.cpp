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
    int numComponents(ListNode* head, vector<int>& nums) {
        set<int>s;
        for(auto i:nums){
            s.insert(i);
        }

        int total=0;
        bool strk = false;

        while(head!=NULL){
            int val = head->val;
            if(s.count(val) && strk==false){
                total += 1;
                strk = true;
            }else if(s.count(val)==0 && strk==true){
                strk = false;
            }
            head = head->next;
        }
        return total;  
    }
};
