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
    bool hasCycle(ListNode *head) {
        if(head==NULL){
            return false;
        }
        int flag=-1e5-1;
        while(head->next!=NULL){
            if(head->val!=flag){
                head->val = flag;
                head = head->next;
            }else{
                return true;
            }
        }
        if(head->val==flag){
            return true;
        }
        return false;
    }
};
