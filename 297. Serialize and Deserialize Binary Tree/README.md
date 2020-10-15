## Description

Serialization is the process of converting a data structure or object into a sequence of bits so that it can be stored in a file or memory buffer, or transmitted across a network connection link to be reconstructed later in the same or another computer environment.

Design an algorithm to serialize and deserialize a binary tree. There is no restriction on how your serialization/deserialization algorithm should work. You just need to ensure that a binary tree can be serialized to a string and this string can be deserialized to the original tree structure.

<strong>Clarification</strong>: The input/output format is the same as how LeetCode serializes a binary tree. You do not necessarily need to follow this format, so please be creative and come up with different approaches yourself.

 

<strong>Example 1:</strong>
<div align="center">
  <img src="https://assets.leetcode.com/uploads/2020/09/15/serdeser.jpg" alt="solution">
</div>
<br>

```
Input: root = [1,2,3,null,null,4,5]
Output: [1,2,3,null,null,4,5]
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
```
Input: root = [1,2]
Output: [1,2]
```

<strong>Constraints:</strong>

- The number of nodes in the tree is in the range [0, 10<sup>4</sup>].
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
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
```

🐛 Online Debuging: https://leetcode-cn.com/problems/serialize-and-deserialize-binary-tree/

## AC Code
<div>
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/297.%20Serialize%20and%20Deserialize%20Binary%20Tree/297_serialize-and-deserialize-binary-tree.cpp">:shipit: C++</a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/297.%20Serialize%20and%20Deserialize%20Binary%20Tree/297_serialize-and-deserialize-binary-tree.py">🐍 Python </a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/297.%20Serialize%20and%20Deserialize%20Binary%20Tree/297_serialize-and-deserialize-binary-tree.java">♨️ Java </a>
</div>
