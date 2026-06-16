class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count = 0;
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
        temp = head;
        count = count - n ;
        for(int i = 1; i < count ; i++){
            temp = temp->next;
        }
        if(temp->next==nullptr){
            return nullptr;
        }
        if(count == 0){
            return head->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};
