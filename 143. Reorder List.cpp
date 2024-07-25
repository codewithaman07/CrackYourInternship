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
    ListNode* rev(ListNode* head){
        ListNode* prev = nullptr;
        ListNode* temp = head;
        while(temp){
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }

    void merge(ListNode* head1 , ListNode* head2){
        while(head2){
            ListNode* newnode = head1->next;
            head1->next = head2;
            head1 = head2;
            head2 = newnode;
        }
    }
    void reorderList(ListNode* head) {
        if(!head || !head->next) return;
        ListNode* slow = head; 
        ListNode* fast = head; 
        ListNode* prev = head;
        while(fast && fast->next){
            prev = slow;
            fast = fast->next->next;
            slow = slow->next;
        }
        prev->next = nullptr;
        ListNode* head1 = head; 
        ListNode* head2 = rev(slow);
        merge(head1, head2); 
    }
};
