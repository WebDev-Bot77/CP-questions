class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == NULL){
            head = NULL;
            return head;
        }
        else if(head->next->next == NULL){
            head->next = NULL;
            return head;
        }
        else{
            ListNode* fast = head->next->next;
            ListNode* slow = head;
            
            while(fast != NULL && fast->next != NULL){
                fast = fast->next->next;
                slow = slow->next;
            }
            
            slow->next = slow->next->next;
            
            return head;
        }
    }
};
