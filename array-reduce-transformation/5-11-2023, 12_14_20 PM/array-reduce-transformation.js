// Link: https://leetcode.com/problems/array-reduce-transformation

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: array-reduce-transformation
 *  RUNTIME: 70 ms
 *  MEMORY: 44.4 MB
 *  DATE: 5-11-2023, 12:14:20 PM
 *
 */

// Solution:

/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    let val = init;
    for(const it of nums){
       val = fn(val,it);
    }
    return val;
};
