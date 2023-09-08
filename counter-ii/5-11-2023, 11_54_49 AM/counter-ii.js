// Link: https://leetcode.com/problems/counter-ii

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: counter-ii
 *  RUNTIME: 54 ms
 *  MEMORY: 44.7 MB
 *  DATE: 5-11-2023, 11:54:49 AM
 *
 */

// Solution:

/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    var n=init;
    return {
         increment: function(){
               return ++n;
        },
        decrement: function(){
               return --n;
        },
        reset: function(){
            return n=init;
        }
    } 
    return {increment, decrement, reset};
} 

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */
