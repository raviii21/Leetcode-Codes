// Link: https://leetcode.com/problems/palindrome-linked-list

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: palindrome-linked-list
 *  RUNTIME: 412 ms
 *  MEMORY: 121.8 MB
 *  DATE: 12-16-2022, 4:42:53 PM
 *
 */

// Solution:

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
        ListNode* dummy = head;
        string s;
        while(dummy){
            int temp = dummy->val;
            s+=to_string(temp);
            dummy=dummy->next;
        }
        string r= string(s.rbegin(),s.rend());
        if(s==r) return true;
        else return false;
    }
};
