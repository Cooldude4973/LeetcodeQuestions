// Given the head of a singly linked list, return the middle node of the linked list.

// If there are two middle nodes, return the second middle node.

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
    ListNode* middleNode(ListNode* head) {
        int len  = 0;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            len++;
            temp = temp->next;
        }
        cout<<len<<endl;
        temp = head;
        int i = 0;
        while(i<len/2)
        {
            temp = temp->next;
            i++;
        }
        return temp;
    }
};