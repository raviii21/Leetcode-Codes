// Link: https://leetcode.com/problems/counter

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: counter
 *  RUNTIME: 48 ms
 *  MEMORY: 42.2 MB
 *  DATE: 5-11-2023, 11:45:47 AM
 *
 */

// Solution:

/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function(n) {
    return function() {
        return n++;
            };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */
