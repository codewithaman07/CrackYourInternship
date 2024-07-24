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
    ListNode* sortList(ListNode* head) {
        if(head == nullptr) return nullptr;
        ListNode*temp = head;
        vector<int>arr;
        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        sort(arr.begin(), arr.end());
        ListNode* dummy = new ListNode(arr[0]);
        temp = dummy;
        for(int i = 1; i<arr.size(); i++){
            ListNode* num = new ListNode(arr[i]);
            temp->next = num;
            temp = temp->next;
        }
        return dummy;
    }
};
