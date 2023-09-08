// Link: https://leetcode.com/problems/function-composition

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: function-composition
 *  RUNTIME: 77 ms
 *  MEMORY: 43.7 MB
 *  DATE: 5-11-2023, 12:30:22 PM
 *
 */

// Solution:

/**
 * @param {Function[]} functions
 * @return {Function}
 */
var compose = function(functions) {
	return function(x) {
        let a = x;
        for(let i = functions.length - 1 ; i >= 0; i--){
            const fun = functions[i];
            a=fun(a);
        }
        return a;
    };
};

/**
 * const fn = compose([x => x + 1, x => 2 * x])
 * fn(4) // 9
 */
