## Description

Given the ``root`` of a binary tree, return the inorder traversal of its <i>nodes' values</i>.


<strong>Example 1:</strong>

<div align="center">
  <img src="https://assets.leetcode.com/uploads/2020/09/15/inorder_1.jpg" alt="example1">
</div>
<br>


```
Input: root = [1,null,2,3]
Output: [1,3,2]
```

<strong>Example 2:</strong>

```
Input: root = []
Output: []
```

<strong>Example 3:</strong>

```
Input: root = [1]
Output: [1]
```

<strong>Example 4:</strong>
<div align="center">
  <img src="https://assets.leetcode.com/uploads/2020/09/15/inorder_5.jpg" alt="example4">
</div>
<br>

```
Input: root = [1,2]
Output: [2,1]
```

<strong>Example 5:</strong>
<div align="center">
  <img src="https://assets.leetcode.com/uploads/2020/09/15/inorder_4.jpg" alt="example5">
</div>
<br>

```
Input: root = [1,null,2]
Output: [1,2]
```

<strong>Constraints:</strong>

- The number of nodes in the tree is in the range ``[0, 100]``.
- ``-100 <= Node.val <= 100``

<strong>Follow up:</strong>

Recursive solution is trivial, could you do it iteratively?

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
    vector<int> inorderTraversal(TreeNode* root) {
        
    }
};
```

🐛 Online Debuging: https://leetcode-cn.com/problems/binary-tree-inorder-traversal/

## AC Code
<div>
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/094.%20Binary%20Tree%20Inorder%20Traversal/94_binary-tree-inorder-traversal.cpp">:shipit: C++</a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/094.%20Binary%20Tree%20Inorder%20Traversal/94_binary-tree-inorder-traversal.py">🐍 Python </a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/094.%20Binary%20Tree%20Inorder%20Traversal/94_binary-tree-inorder-traversal.java">♨️ Java </a>
</div>
