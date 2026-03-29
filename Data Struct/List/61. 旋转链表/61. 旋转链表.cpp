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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr) return head;
        int size = 1;
        ListNode* curr = head;
        while(curr->next != nullptr){
            size++;
            curr = curr->next;
        }
        curr->next = head;
        int i=1;
        k = k%size;
        while(i < size-k){
            i++;
            head = head->next;
        }
        ListNode* temp = head->next;
        head->next = nullptr;
        head = temp;
        return head;
    }
};
