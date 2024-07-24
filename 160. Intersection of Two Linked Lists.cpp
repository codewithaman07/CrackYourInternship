/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        int cntA = 0;
        int cntB = 0;
        while(tempA){
            cntA++;
            tempA = tempA->next;
        }
        while(tempB){
            cntB++;
            tempB = tempB->next;
        }
        int n = min(cntA,cntB);
        tempA = headA;
        tempB = headB;
        for(int i = 0; i<n-1; i++){
            if(tempA->next == tempB->next){
                return tempA->next;
            }
            else{
                tempA = tempA->next;
                tempB = tempB->next;
            }
        }
        return nullptr;
    }
};
