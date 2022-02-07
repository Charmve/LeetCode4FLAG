<img src="https://img.shields.io/static/v1.svg?style=for-the-badge&label=difficulty&message=easy&color=green"/>

## Description

We are given a binary tree (with root node root), a target node, and an integer value K.

Return a list of the values of all nodes that have a distance K from the target node.  The answer can be returned in any order.


<strong>Example 1:</strong>
```
Input: root = [3,5,1,6,2,0,8,null,null,7,4], target = 5, K = 2

Output: [7,4,1]
```

<strong>Explanation: </strong>
The nodes that are a distance 2 from the target node (with value 5)
have values 7, 4, and 1.

<div align="center">
  <img src="https://s3-lc-upload.s3.amazonaws.com/uploads/2018/06/28/sketch0.png" alt="example">
</div>
<br>

> Note that the inputs "root" and "target" are actually TreeNodes.

> The descriptions of the inputs above are just serializations of these objects.
 

Note:

1. The given tree is non-empty.
2. Each node in the tree has unique values 0 <= node.val <= 500.
3. The target node is a node in the tree.
4. ``0 <= K <= 1000``.



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
    vector<int> distanceK(TreeNode* root, TreeNode* target, int K) {
        
    }
};
```

🐛 Online Debuging: https://leetcode-cn.com/problems/all-nodes-distance-k-in-binary-tree/

## AC Code
<div>
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/863.%20All%20Nodes%20Distance%20K%20in%20Binary%20Tree/863_all-nodes-distance-k-in-binary-tree.cpp">:shipit: C++</a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/863.%20All%20Nodes%20Distance%20K%20in%20Binary%20Tree/863_all-nodes-distance-k-in-binary-tree.py">🐍 Python </a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/863.%20All%20Nodes%20Distance%20K%20in%20Binary%20Tree/863_all-nodes-distance-k-in-binary-tree.java">♨️ Java </a>
</div>
