## Description

Given a <strong>non-empty</strong> binary tree, find the maximum path sum.

For this problem, a path is defined as any node sequence from some starting node to any node in the tree along the parent-child connections. The path must contain <strong>at least one</strong> node and does not need to go through the root.


<strong>Example 1:</strong>
<div align="center">
  <img src="https://assets.leetcode.com/uploads/2020/10/13/exx1.jpg" alt="example">
</div>
<br>

```
Input: root = [1,2,3]
Output: 6
```

<strong>Example 2:</strong>

<div align="center">
  <img src="https://assets.leetcode.com/uploads/2020/10/13/exx2.jpg" alt="example2">
</div>
<br>

```
Input: root = [-10,9,20,null,null,15,7]
Output: 42
```

<strong>Constraints:</strong>

- The number of nodes in the tree is in the range [0, 3 * 104].
- -1000 <= Node.val <= 1000


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
    int maxPathSum(TreeNode* root) {

    }
};
```

🐛 Online Debuging: https://leetcode-cn.com/problems/binary-tree-maximum-path-sum/

## AC Code
<div>
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/124.%20Binary%20Tree%20Maximum%20Path%20Sum/124_binary-tree-maximum-path-sum.cpp">:shipit: C++</a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/124.%20Binary%20Tree%20Maximum%20Path%20Sum/124_binary-tree-maximum-path-sum.py">🐍 Python </a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/124.%20Binary%20Tree%20Maximum%20Path%20Sum/124_binary-tree-maximum-path-sum.java">♨️ Java </a>
</div>
