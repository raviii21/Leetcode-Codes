// Link: https://leetcode.com/problems/create-hello-world-function

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: create-hello-world-function
 *  RUNTIME: 64 ms
 *  MEMORY: 42.2 MB
 *  DATE: 5-11-2023, 11:43:01 AM
 *
 */

// Solution:

/**
 * @return {Function}
 */
var createHelloWorld = function() {
    return function(...args) {
        return "Hello World";
    }
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */
