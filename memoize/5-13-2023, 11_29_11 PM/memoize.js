// Link: https://leetcode.com/problems/memoize

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: memoize
 *  RUNTIME: 333 ms
 *  MEMORY: 108.2 MB
 *  DATE: 5-13-2023, 11:29:11 PM
 *
 */

// Solution:

/**
 * @param {Function} fn
 */
function memoize(fn) {
  const cache = {};
  return function(...args) {
    const k = JSON.stringify(args);
    if (k in cache)return cache[k];
    
    const Output = fn(...args);
    cache[k] = Output;
    return Output;
  }
}


/** 
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *	 callCount += 1;
 *   return a + b;
 * })
 * memoizedFn(2, 3) // 5
 * memoizedFn(2, 3) // 5
 * console.log(callCount) // 1 
 */
