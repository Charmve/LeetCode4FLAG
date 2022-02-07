<img src="https://img.shields.io/static/v1.svg?style=for-the-badge&label=difficulty&message=easy&color=green"/>

## Description
You are given a list of non-negative integers, a1, a2, ..., an, and a target, S. Now you have 2 symbols ``+`` and ``-``. For each integer, you should choose one from ``+`` and ``-`` as its new symbol.

Find out how many ways to assign symbols to make sum of integers equal to target S.

<strong>Example 1:</strong>
```
Input: nums is [1, 1, 1, 1, 1], S is 3. 
Output: 5
Explanation: 

-1+1+1+1+1 = 3
+1-1+1+1+1 = 3
+1+1-1+1+1 = 3
+1+1+1-1+1 = 3
+1+1+1+1-1 = 3

There are 5 ways to assign symbols to make the sum of nums be target 3.
```

<strong>Constraints:</strong>

- The length of the given array is positive and will not exceed 20.
- The sum of elements in the given array will not exceed 1000.
- Your output answer is guaranteed to be fitted in a 32-bit integer.


## Debug
```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
    }
};
```

🐛 Online Debuging: https://leetcode-cn.com/problems/merge-two-sorted-lists/

## AC Code
<div>
	  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/494.%20Target%20Sum/494_target-sum.cpp">:shipit: C++</a> | 
	  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/494.%20Target%20Sum/494_target-sum.py">🐍 Python </a> | 
	  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/494.%20Target%20Sum/494_target-sum.java">♨️ Java </a>
	</div>
