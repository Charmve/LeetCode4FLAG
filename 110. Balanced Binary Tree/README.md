## Description
Given a binary tree, determine if it is height-balanced.

For this problem, a height-balanced binary tree is defined as:

> a binary tree in which the left and right subtrees of every node differ in height by no more than 1.

 

<strong>Example 1:</strong>
<div align="left">
  <img align="center" src="https://assets.leetcode.com/uploads/2020/10/06/balance_1.jpg">
</div>
<br>

```
Input: root = [3,9,20,null,null,15,7]
Output: true
```
<strong>Example 2:</strong>
<div align="left">
  <img align="center" src="https://assets.leetcode.com/uploads/2020/10/06/balance_2.jpg">
</div>
<br>

```
Input: root = [1,2,2,3,3,null,null,4,4]
Output: false
```
<strong>Example 3:</strong>
```
Input: root = []
Output: true
```

<strong>Constraints:</strong>

- The number of nodes in the tree is in the range ``[0, 5000]``.
- ``-10^4 <= Node.val <= 10^4``


## Debug
```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        
    }
};
```

🐛 Online Debuging: https://leetcode-cn.com/problems/balanced-binary-tree

## AC Code
<div>
  <a href="https://github.com/Charmve/LeetCode4FLAG/blob/main/110.%20Balanced%20Binary%20Tree/110_balanced-binary-tree.cpp">:shipit: C++</a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/blob/main/110.%20Balanced%20Binary%20Tree/110_balanced-binary-tree.py">🐍 Python </a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/blob/main/110.%20Balanced%20Binary%20Tree/110_balanced-binary-tree.java">♨️ Java </a>
</div>
