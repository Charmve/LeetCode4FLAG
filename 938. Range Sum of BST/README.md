## Description

Given the ``root`` node of a binary search tree, return the sum of values of all nodes with value between ``L`` and ``R`` (inclusive).

The binary search tree is guaranteed to have unique values.


<strong>Example 1:</strong>
```
Input: root = [10,5,15,3,7,null,18], L = 7, R = 15
Output: 32
```

<strong>Example 2:</strong>
```
Input: root = [10,5,15,3,7,13,18,1,null,6], L = 6, R = 10
Output: 23
```

<strong>Note:</strong>

- The number of nodes in the tree is at most 10000.
- The final answer is guaranteed to be less than 2^31.


## Debug
```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {

    }
};
```

🐛 Online Debuging: https://leetcode-cn.com/problems/range-sum-of-bst/

## AC Code
<div>
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/938.%20Range%20Sum%20of%20BST/938_range-sum-of-bst.cpp">:shipit: C++</a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/938.%20Range%20Sum%20of%20BST/938_range-sum-of-bst.py">🐍 Python </a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/938.%20Range%20Sum%20of%20BST/938_range-sum-of-bst.java">♨️ Java </a>
</div>
