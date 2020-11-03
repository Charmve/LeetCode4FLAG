## Description
Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.

According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”

 

<strong>Example 1:</strong>
<div align="center">
  <img src="https://assets.leetcode.com/uploads/2018/12/14/binarytree.png" alt="example1">
</div>
<br>

```
Input: root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 1
Output: 3
Explanation: The LCA of nodes 5 and 1 is 3.
```

<strong>Example 2:</strong>
<div align="center">
  <img src="https://assets.leetcode.com/uploads/2018/12/14/binarytree.png" alt="example2">
</div>
<br>

```
Input: root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 4
Output: 5
Explanation: The LCA of nodes 5 and 4 is 5, since a node can be a descendant of itself according to the LCA definition.
```

<strong>Example 3:</strong>
```
Input: root = [1,2], p = 1, q = 2
Output: 1
```

<strong>Constraints:</strong>

- The number of nodes in the tree is in the range [2, 10<sup>5</sup>].
- -109 <= Node.val <= 109
- All Node.val are <strong>unique</strong>.
- p != q
- p and q will exist in the tree.


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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
    }
};
```

🐛 Online Debuging: https://leetcode-cn.com/problems/lowest-common-ancestor-of-a-binary-tree

## AC Code
<div>
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/236.%20Lowest%20Common%20Ancestor%20of%20a%20Binary%20Tree/236_lowest-common-ancestor-of-a-binary-tree.cpp">:shipit: C++</a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/236.%20Lowest%20Common%20Ancestor%20of%20a%20Binary%20Tree/236_lowest-common-ancestor-of-a-binary-tree.py">🐍 Python </a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/236.%20Lowest%20Common%20Ancestor%20of%20a%20Binary%20Tree/236_lowest-common-ancestor-of-a-binary-tree.java">♨️ Java </a>
</div>
