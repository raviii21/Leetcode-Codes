// Link: https://leetcode.com/problems/baseball-game

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: baseball-game
 *  RUNTIME: 9 ms
 *  MEMORY: 8.4 MB
 *  DATE: 12-22-2022, 3:06:45 PM
 *
 */

// Solution:

class Solution {
public:
    int calPoints(vector<string>& a) {
        int sum = 0, score = 0;
        vector<int> v;
        for (string s : a) {
            if (s == "C") {
                sum -= v.back();
                v.pop_back();
                continue;
            }
            if (s == "D") {
                sum += score = v.back() * 2;
            }
            else if (s == "+") {
                sum += score = v[v.size() - 1] + v[v.size() - 2];
            }
            else {
                sum += score = stoi(s);
            }
            v.push_back(score);
        }
        return sum;
    }
};
