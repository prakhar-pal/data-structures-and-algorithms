const assert = require("assert");

// https://neetcode.io/problems/car-fleet/question?list=neetcode150
class Solution {
    /**
     * @param {number} target
     * @param {number[]} position
     * @param {number[]} speed
     * @return {number}
     */
  carFleet(target, position, speed) {
    const times = position.map((pos, index) => ({ pos, speed: speed[index] })).sort((a, b) => {
      return b.pos - a.pos;
    }).map(car => ({ pos: car.pos, time: (target - car.pos) / car.speed })).map(car => car.time);
    let fleet = 0;
    let current = 0;
    while (current < position.length) {
      let next = current + 1;
      while (next < position.length && times[current] >= times[next]) {
        next++;
      }
      current = next++;
      fleet++;
    }
    return fleet;
  }
}


if (require.main === module) {
  const solution = new Solution();
  assert(solution.carFleet(10, [1, 4], [3, 2]) === 1);
  assert(solution.carFleet(10, [4,1,0,7], [2,2,1,1]) === 3);
  assert(solution.carFleet(10, [0,4,2], [2,1,3]) === 1);
}
