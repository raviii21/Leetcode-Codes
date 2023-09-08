// Link: https://leetcode.com/problems/filter-elements-from-array

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: filter-elements-from-array
 *  RUNTIME: 60 ms
 *  MEMORY: 42.3 MB
 *  DATE: 5-11-2023, 12:05:15 PM
 *
 */

// Solution:

/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    var array = [];
    for(var i=0; i<arr.length; i++){
        if(fn(arr[i],i)) array.push(arr[i]);
    }
    return array;
};
