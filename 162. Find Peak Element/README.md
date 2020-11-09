## Description

A peak element is an element that is greater than its neighbors.

Given an input array ``nums``, where ``nums[i] ≠ nums[i+1]``, find a peak element and return its index.

The array may contain multiple peaks, in that case return the index to any one of the peaks is fine.

You may imagine that ``nums[-1] = nums[n] = -∞``.

<strong>Example 1:</strong>
```
Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.
```
<strong>Example 2:</strong>
```
Input: nums = [1,2,1,3,5,6,4]
Output: 1 or 5 
Explanation: Your function can return either index number 1 where the peak element is 2, 
             or index number 5 where the peak element is 6.
```

<strong>Follow up:</strong> Your solution should be in logarithmic complexity.


## Debug
```cpp
class Solution {
public:
    int findPeakElement(vector<int>& nums) {

    }
};
```

🐛 Online Debuging: https://leetcode-cn.com/problems/find-peak-element

## AC Code
<div>
	  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/162.%20Find%20Peak%20Element/162_find-peak-element.cpp">:shipit: C++</a> | 
	  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/162.%20Find%20Peak%20Element/162_find-peak-element.py">🐍 Python </a> | 
	  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/162.%20Find%20Peak%20Element/162_find-peak-element.java">♨️ Java </a>
</div>
