## Description
You are given an integer array ``nums`` sorted in ascending order, and an integer ``target``.

Suppose that ``nums`` is rotated at some pivot unknown to you beforehand (i.e., ``[0,1,2,4,5,6,7]`` might become ``[4,5,6,7,0,1,2]``).

If ``target`` is found in the array return its ``index``, otherwise, return ``-1``.

 

<strong>Example 1:</strong>
```
Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
```
<strong>Example 2:</strong>
```
Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
```
<strong>Example 3:</strong>
```
Input: nums = [1], target = 0
Output: -1
```

<strong>Constraints:</strong>

- 1 <= nums.length <= 5000
- -10^4 <= nums[i] <= 10^4
- All values of nums are <strong>unique</strong>.
- ``nums`` is guranteed to be rotated at some pivot.
- -10^4 <= target <= 10^4


## Debug
```cpp
class Solution {
public:
    int search(vector<int>& nums, int target) {

    }
};
```

🐛 Online Debuging: https://leetcode-cn.com/problems/search-in-rotated-sorted-array

## AC Code
<div>
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/033.%20Search%20in%20Rotated%20Sorted%20Array/33_search-in-rotated-sorted-array.cpp">:shipit: C++</a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/033.%20Search%20in%20Rotated%20Sorted%20Array/33_search-in-rotated-sorted-array.py">🐍 Python </a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/033.%20Search%20in%20Rotated%20Sorted%20Array/33_search-in-rotated-sorted-array.java">♨️ Java </a>
</div>
