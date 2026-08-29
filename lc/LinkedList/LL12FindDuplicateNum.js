// https://neetcode.io/problems/find-duplicate-integer/question
const assert = require('assert');
class Solution {
    /**
     * @param {number[]} nums
     * @return {number}
     */
  findDuplicate(nums) {
    let s = 0, f = 0;
    while (true) {
      s = nums[s];
      f = nums[nums[f]];
      if (s === f) {
        break;
      }
    }
    let s1 = 0;
    while (s1 != s) {
      s1 = nums[s1];
      s = nums[s];
    }
    return s;
  }
}

const solution = new Solution();
assert.deepEqual(solution.findDuplicate([1, 2, 3, 2, 2]), 2, 'tc1');
assert.deepEqual(solution.findDuplicate([1,2,3,4,4]), 4,'tc2');
assert.deepEqual(solution.findDuplicate([0, 0, 0, 0]), 0,'tc3');
assert.deepEqual(solution.findDuplicate([1, 2, 2, 3]), 2,'tc4');
assert.deepEqual(solution.findDuplicate([1, 1, 2]), 1, 'tc5');
assert.deepEqual(solution.findDuplicate(nums = [3, 1, 3, 4, 2]), 3, 'tc6');
