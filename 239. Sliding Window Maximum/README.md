## Description
You are given an array of integers nums, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position.

Return the max sliding window.


<strong>Example 1:</strong>
```
Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
Output: [3,3,5,5,6,7]

Explanation: 
Window position                Max
---------------               -----
[1  3  -1] -3  5  3  6  7       3
 1 [3  -1  -3] 5  3  6  7       3
 1  3 [-1  -3  5] 3  6  7       5
 1  3  -1 [-3  5  3] 6  7       5
 1  3  -1  -3 [5  3  6] 7       6
 1  3  -1  -3  5 [3  6  7]      7
```

<strong>Example 2:</strong>
```
Input: nums = [1], k = 1
Output: [1]
```
<strong>Example 3:</strong>
```
Input: nums = [1,-1], k = 1
Output: [1,-1]
```
<strong>Example 4:</strong>
```
Input: nums = [9,11], k = 2
Output: [11]
```
<strong>Example 5:</strong>
```
Input: nums = [4,-2], k = 2
Output: [4]
```

<strong>Constraints:</strong>

- 1 <= nums.length <= 105
- -104 <= nums[i] <= 104
- 1 <= k <= nums.length


## Debug
```cpp
class Solution {
public:
    int longestValidParentheses(string s) {

    }
};
```

🐛 Online Debuging: https://leetcode-cn.com/problems/sliding-window-maximum/

## AC Code
<div>
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/239.%20Sliding%20Window%20Maximum/239_sliding-window-maximum.cpp">:shipit: C++</a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/239.%20Sliding%20Window%20Maximum/239_sliding-window-maximum.py">🐍 Python </a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/239.%20Sliding%20Window%20Maximum/239_sliding-window-maximum.java">♨️ Java </a>
</div>
