## Description

Given a string s, find the length of the <strong>longest substring</strong> without repeating characters.

 

<strong>Example 1:</strong>
```
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
```
<strong>Example 2:</strong>
```
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
```

<strong>Example 3:</strong>
```
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
```
<strong>Example 4:</strong>
```
Input: s = ""
Output: 0
```

<strong>Constraints:</strong>

- 0 <= s.length <= 5 * 10<sup>4</sup>
- s consists of English letters, digits, symbols and spaces.


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

🐛 https://leetcode-cn.com/problems/longest-substring-without-repeating-characters/

## AC Code
<div>
			  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/3.%20Longest%20Substring%20Without%20Repeating%20Characters/3.longest-substring-without-repeating-characters.cpp">:shipit: C++</a> | 
			  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/3.%20Longest%20Substring%20Without%20Repeating%20Characters/3.longest-substring-without-repeating-characters.py">🐍 Python </a> | 
			  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/3.%20Longest%20Substring%20Without%20Repeating%20Characters/3.longest-substring-without-repeating-characters.java">♨️ Java </a>
</div>
