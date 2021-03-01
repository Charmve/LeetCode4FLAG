## 153. Find Minimum in Rotated Sorted Array
Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand. (i.e.,  ``[0,1,2,4,5,6,7]`` might become  ``[4,5,6,7,0,1,2]``).

Return the minimum element of this array.

 

<strong>Example 1:</strong>
```
Input: nums = [3,4,5,1,2]
Output: 1
```
<strong>Example 2:</strong>
```
Input: nums = [4,5,6,7,0,1,2]
Output: 0
```
<strong>Example 3:</strong>
```
Input: nums = [1]
Output: 1
```

<strong>Constraints:</strong>

- 1 <= nums.length <= 5000
- -5000 <= nums[i] <= 5000
- All the integers of nums are <strong>unique</strong>.
- nums is sorted and rotated at some pivot.

## Debug
```cpp
class Solution {
public:
    int findMin(vector<int>& nums) {

    }
};
```

🐛 Online Debuging: https://leetcode-cn.com/problems/find-minimum-in-rotated-sorted-array/

## AC Code
<div>
	<a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/153.%20Find%20Minimum%20in%20Rotated%20Sorted%20Array/153_find-minimum-in-rotated-sorted-array.cpp">:shipit: C++</a> | 
	<a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/153.%20Find%20Minimum%20in%20Rotated%20Sorted%20Array/153_find-minimum-in-rotated-sorted-array.py">🐍 Python </a> | 
	<a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/153.%20Find%20Minimum%20in%20Rotated%20Sorted%20Array/153_find-minimum-in-rotated-sorted-array.java">♨️ Java </a>
</div>

## Related Question

「搜索旋转排序数组」题：

- LeetCode 33 题：搜索旋转排序数组
- LeetCode 81 题：搜索旋转排序数组-ii
- LeetCode 153 题：寻找旋转排序数组中的最小值
- LeetCode 154 题：寻找旋转排序数组中的最小值-ii

链接：https://leetcode-cn.com/problems/find-minimum-in-rotated-sorted-array/solution/yi-wen-jie-jue-4-dao-sou-suo-xuan-zhuan-pai-xu-s-3/
