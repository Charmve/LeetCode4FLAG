## Description

You are given the ``root`` of a binary search tree (BST), where exactly two nodes of the tree were swapped by mistake. Recover the tree without changing its structure.

<strong>Follow up</strong>: A solution using ``O(n)`` space is pretty straight forward. Could you devise a constant space solution?

 

<strong>Example 1:</strong>
<div align="center">
  <img src="https://assets.leetcode.com/uploads/2020/10/28/recover1.jpg" alt="example1">
</div>
<br>

```
Input: root = [1,3,null,null,2]
Output: [3,1,null,null,2]
Explanation: 3 cannot be a left child of 1 because 3 > 1. Swapping 1 and 3 makes the BST valid.
```

<strong>Example 2:</strong>
<div align="center">
  <img src="https://assets.leetcode.com/uploads/2020/10/28/recover2.jpg" alt="example1">
</div>
<br>

```
Input: root = [3,1,4,null,null,2]
Output: [2,1,4,null,null,3]
Explanation: 2 cannot be in the right subtree of 3 because 2 < 3. Swapping 2 and 3 makes the BST valid.
```

<strong>Constraints:</strong>

- The number of nodes in the tree is in the range ``[2, 1000]``.
- -2<sup>31</sup> <= Node.val <= 2<sup>31</sup> - 1

## Debug
```
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
    void recoverTree(TreeNode* root) {

    }
};
```

🐛 Online Debuging: https://leetcode-cn.com/problems/recover-binary-search-tree/

## AC Code
<div>
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/099.%2Recover%2Binary%2Search%2Tree/99_recover-binary-search-tree.cpp">:shipit: C++</a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/099.%2Recover%2Binary%2Search%2Tree/99_recover-binary-search-tree.py">🐍 Python </a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/099.%2Recover%2Binary%2Search%2Tree/99_recover-binary-search-tree.java">♨️ Java </a>
</div>
