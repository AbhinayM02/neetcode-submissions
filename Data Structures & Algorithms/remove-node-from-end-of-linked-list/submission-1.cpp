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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=0;
        if(!head)return head;
        ListNode* temp=head;
        while(temp){
            temp=temp->next;
            len++;
        }
        if(len==1)return NULL;
        if (len == n) {
            return head->next;
        }
        int i=0;
        temp=head;
        while(i<len-n-1){
            temp=temp->next;
            i++;
        }
        temp->next=temp->next->next;
        return head;
    }
};
