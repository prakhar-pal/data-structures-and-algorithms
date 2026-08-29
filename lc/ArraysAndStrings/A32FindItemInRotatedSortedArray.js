// https://neetcode.io/problems/find-target-in-rotated-sorted-array/question?list=neetcode150
const assert = require('assert');
class Solution {
    /**
     * @param {number[]} nums
     * @param {number} target
     * @return {number}
     */
  search(nums, target) {
    const util = (left, right) => {
      // console.log({ left, right });
      if (left > right) {
        return -1;
      }
      if (nums[left] === target) {
        return left;
      }
      if (nums[right] === target) {
        return right;
      }
      const mid = Math.floor((left + right) / 2);
      if (nums[mid] === target) {
        return mid;
      }
      let foundIndex = -1;
      if ((nums[left] < nums[mid] && nums[left] < target & nums[mid] > target) || nums[left] > nums[mid]) {
        foundIndex = Math.max(foundIndex, util(left + 1, mid - 1));
      }
      if ((nums[mid] < nums[right] && nums[mid] < target & nums[right] > target) || nums[mid] > nums[right]) {
        foundIndex = Math.max(foundIndex, util(mid + 1, right - 1));
      }
      return foundIndex;
    }
    return util(0, nums.length - 1);
  }
}

const solution = new Solution();

assert.deepEqual(solution.search([3, 4, 5, 6, 1, 2], 1), 4, solution.search([3, 4, 5, 6, 1, 2], 1));
assert.deepEqual(solution.search([3,5,6,0,1,2], 4), -1, solution.search([3,5,6,0,1,2], 4), );
assert.deepEqual(solution.search([1,3], 3),1, solution.search([1,3], 3), );
assert.deepEqual(solution.search([1,2,3], 1), 0, solution.search([1,2, 3], 1), );
assert.deepEqual(solution.search([1,2, 3], 2) , 1, solution.search([1,2, 3], 2));
assert.deepEqual(solution.search([1,3, 5], 5) , 2, solution.search([1, 3, 5], 5));
