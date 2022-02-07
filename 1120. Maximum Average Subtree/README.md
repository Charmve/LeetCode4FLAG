<img src="https://img.shields.io/static/v1.svg?style=for-the-badge&label=difficulty&message=easy&color=green"/>

## 1120. Maximum Average Subtree

Given the root of a binary tree, find the maximum average value of any subtree of that tree.

(A subtree of a tree is any node of that tree plus all its descendants. The average value of a tree is the sum of its values, divided by the number of nodes.)

<strong>Example 1:</strong>
```
Input: [5,6,1]
Output: 6.00000
```

<strong>Explanation: </strong>
- For the node with value = 5 we have and average of (5 + 6 + 1) / 3 = 4.
- For the node with value = 6 we have and average of 6 / 1 = 6.
- For the node with value = 1 we have and average of 1 / 1 = 1.

So the answer is 6 which is the maximum.


<strong>Note:</strong>

1. The number of nodes in the tree is between 1 and 5000.<br>
2. Each node will have a value between 0 and 100000.<br>
3. Answers will be accepted as correct if they are within 10^-5 of the correct answer.


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
    pair<int, int> dfs(TreeNode* root, double& min_avg) {

    }
private:
    unordered_map<TreeNode*, pair<int, int>> m_;
};
```

🐛 Online Debuging: https://leetcode-cn.com/problems/maximum-average-subtree/ (not free now)

## AC Code
<div>
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/1120.%20Maximum%20Average%20Subtree/1120_maximum-average-subtree.cpp">:shipit: C++</a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/1120.%20Maximum%20Average%20Subtree/1120_maximum-average-subtree.py">🐍 Python </a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/1120.%20Maximum%20Average%20Subtree/1120_maximum-average-subtree.java">♨️ Java </a>
</div>
