class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr){
            return nullptr;
        }
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while(curr!=nullptr){
            ListNode* nest = curr->next;
            curr->next=prev;
            prev= curr;
            curr=nest;
        }
        return prev;
    }
};
