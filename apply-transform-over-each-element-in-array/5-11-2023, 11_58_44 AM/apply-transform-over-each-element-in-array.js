// Link: https://leetcode.com/problems/apply-transform-over-each-element-in-array

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: apply-transform-over-each-element-in-array
 *  RUNTIME: 55 ms
 *  MEMORY: 42.1 MB
 *  DATE: 5-11-2023, 11:58:44 AM
 *
 */

// Solution:

/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    for(var i=0; i<arr.length; i++){
           arr[i]=fn(arr[i],i);
    }
    return arr;
};
