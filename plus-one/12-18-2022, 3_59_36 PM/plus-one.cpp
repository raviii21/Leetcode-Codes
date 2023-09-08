// Link: https://leetcode.com/problems/plus-one

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: plus-one
 *  RUNTIME: 3 ms
 *  MEMORY: 8.7 MB
 *  DATE: 12-18-2022, 3:59:36 PM
 *
 */

// Solution:

class Solution {
public:
    vector<int> plusOne(vector<int>& a) {
       for (int i = a.size() - 1; i >= 0; i--) {
		if (a[i] < 9) {
			a[i]++;
			return a;
		}
		a[i] = 0;
	}
	a.insert(a.begin(), 1);
	return a;
    }
};
