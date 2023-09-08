// Link: https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: average-salary-excluding-the-minimum-and-maximum-salary
 *  RUNTIME: 0 ms
 *  MEMORY: 7.2 MB
 *  DATE: 5-1-2023, 10:10:59 AM
 *
 */

// Solution:

class Solution {
public:
    double average(vector<int>& salary) {
        double ans;
        int maxi = *max_element(salary.begin(), salary.end());
        int mini = *min_element(salary.begin(), salary.end());
        int sum=0;
        for(int i=0; i<salary.size(); i++) 
          if(salary[i]!=maxi && salary[i]!=mini)   
             sum+=salary[i];
            
        int x = salary.size()-2;    
        ans = (double)sum/(double)x;
        return ans;
    }
};
