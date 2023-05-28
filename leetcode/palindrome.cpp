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
    bool isPalindrome(ListNode* head) {
        string str = "";
        for (ListNode* n = head; n != NULL; n = n->next)
            str += (n->val) + '0';
        for (int i = 0; i < str.length() / 2; ++i)
        {
            if (str[i] != str[str.length() - 1 - i])
                return false;
        }
        return true;
    }
};