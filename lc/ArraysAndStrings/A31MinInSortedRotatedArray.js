// https://neetcode.io/problems/find-minimum-in-rotated-sorted-array/history?list=neetcode150&submissionIndex=0

class Solution {
    /**
     * @param {number[]} nums
     * @return {number}
     */
  findMin(nums) {
    const util = (left, right) => {
      // console.log({ left, right})
      if (left === right) {
        return nums[left];
      }
      const mid = Math.floor((left + right) / 2);
      if (nums[mid] > nums[right]) {
        return util(mid + 1, right);
      }
      return util(left, mid);
    }
    return util(0, nums.length - 1);
  }
}


const solution = new Solution();
console.log(solution.findMin([3, 4, 5, 6, 1, 2]), 1);
console.assert(solution.findMin([4,5,0,1,2,3]) === 0);
console.assert(solution.findMin([4,5,6,7]) === 4);
