## Description
Given two sorted arrays nums1 and nums2 of size m and n respectively, return <strong>the median</strong> of the two sorted arrays.

<strong>Follow up</strong>: The overall run time complexity should be O(log (m+n)).

 

<strong>Example 1:</strong>
```
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
```
<strong>Example 2:</strong>
```
Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
```
<strong>Example 3:</strong>
```
Input: nums1 = [0,0], nums2 = [0,0]
Output: 0.00000
```
<strong>Example 4:</strong>
```
Input: nums1 = [], nums2 = [1]
Output: 1.00000
```
<strong>Example 5:</strong>
```
Input: nums1 = [2], nums2 = []
Output: 2.00000
```

<strong>Constraints:</strong>

- nums1.length == m
- nums2.length == n
- 0 <= m <= 1000
- 0 <= n <= 1000
- 1 <= m + n <= 2000
- -10<sup>6</sup> <= nums1[i], nums2[i] <= 106


## Debug
```cpp
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

    }
};
```

🐛 Online Debuging: https://leetcode-cn.com/problems/median-of-two-sorted-arrays

## AC Code
<div>
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/004.%20Median%20of%20Two%20Sorted%20Arrays/4_median-of-two-sorted-arrays.cpp">:shipit: C++</a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/004.%20Median%20of%20Two%20Sorted%20Arrays/4_median-of-two-sorted-arrays.py">🐍 Python </a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/004.%20Median%20of%20Two%20Sorted%20Arrays/4_median-of-two-sorted-arrays.java">♨️ Java </a>
</div>
