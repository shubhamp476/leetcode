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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;
        int curr = 0;
        
        while(temp != NULL){
            
            if(temp->val != 0){
                curr += temp->val;
            }
            else{
                tail->next = new ListNode(curr);
                tail = tail->next;
                curr = 0;
            }
            temp = temp->next;
        }
        return dummy->next;
    }
};