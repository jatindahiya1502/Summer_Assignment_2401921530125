class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int count = 0;
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
        count= count/2;
        for(int i = 0; i<count ;i++ ){
            head = head->next;
        }
        return head;
    }
};
