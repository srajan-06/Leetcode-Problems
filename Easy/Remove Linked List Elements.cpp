class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
      ListNode dummy = ListNode(0);
      dummy.next = head;
      ListNode* prev = &dummy;

      ListNode *temp = head;
      ListNode *next;

      while(temp!=NULL){
          next = temp->next;

          if(temp->val == val){
              prev->next = next; 
          }else{
              prev = temp;
          }

          temp = next;
      }
      return dummy.next;
    }
};
