## Description


You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security system connected and <strong>it will automatically contact the police if two adjacent houses were broken into on the same night</strong>.

Given a list of non-negative integers representing the amount of money of each house, determine the maximum amount of money you can rob tonight <strong>without alerting the police</strong>.

 

<strong>Example 1:</strong>
```
Input: nums = [1,2,3,1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
             Total amount you can rob = 1 + 3 = 4.
```
<strong>Example 2:</strong>
```
Input: nums = [2,7,9,3,1]
Output: 12
Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).
             Total amount you can rob = 2 + 9 + 1 = 12.
```

<strong>Constraints:</strong>

- 0 <= nums.length <= 100
- 0 <= nums[i] <= 400


## Debug
```cpp
class Solution {
public:
    int rob(vector<int>& nums) {

    }
};
```

🐛 Online Debuging: https://leetcode-cn.com/problems/house-robber

## AC Code
<div>
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/198.%20House%20Robber/198_house-robber.cpp">:shipit: C++</a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/198.%20House%20Robber/198_house-robber.py">🐍 Python </a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/198.%20House%20Robber/198_house-robber.java">♨️ Java </a>
</div>
