## Description
Given a binary tree, determine if it is a valid binary search tree (BST).

Assume a BST is defined as follows:

- The left subtree of a node contains only nodes with keys <strong>less than</strong> the node's key.
- The right subtree of a node contains only nodes with keys <strong>greater than</strong> the node's key.
- Both the left and right subtrees must also be binary search trees.
 

<strong>Example 1:</strong>
```
    2
   / \
  1   3

Input: [2,1,3]
Output: true
```
<strong>Example 2:</strong>
```
    5
   / \
  1   4
     / \
    3   6

Input: [5,1,4,null,null,3,6]
Output: false
Explanation: The root node's value is 5 but its right child's value is 4.
```


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
    bool isValidBST(TreeNode* root) {
        
    }
};
```

🐛 Online Debuging: https://leetcode-cn.com/problems/validate-binary-search-tree/

## AC Code
<div>
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/098.%20Validate%20Binary%20Search%20Tree/98_validate-binary-search-tree.cpp">:shipit: C++</a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/098.%20Validate%20Binary%20Search%20Tree/98_validate-binary-search-tree.py">🐍 Python </a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/098.%20Validate%20Binary%20Search%20Tree/98_validate-binary-search-tree.java">♨️ Java </a>
</div>
