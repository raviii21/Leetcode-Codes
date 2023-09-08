// Link: https://leetcode.com/problems/allow-one-function-call

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: allow-one-function-call
 *  RUNTIME: 59 ms
 *  MEMORY: 41.6 MB
 *  DATE: 5-12-2023, 11:03:09 PM
 *
 */

// Solution:

/**
 * @param {Function} fn
 * @return {Function}
 */
var once = function(fn) {
    let a=0;
    return function(...args){
        if(a==0){
           a++;
           return fn(...args);
        }
        else 
        return undefined;
    }
};

/**
 * let fn = (a,b,c) => (a + b + c)
 * let onceFn = once(fn)
 *
 * onceFn(1,2,3); // 6
 * onceFn(2,3,6); // returns undefined without calling fn
 */
