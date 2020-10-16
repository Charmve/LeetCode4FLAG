## Description
Given a string containing only three types of characters: '(', ')' and '*', write a function to check whether this string is valid. We define the validity of a string by these rules:

1. Any left parenthesis '(' must have a corresponding right parenthesis ')'.
2. Any right parenthesis ')' must have a corresponding left parenthesis '('.
3. Left parenthesis '(' must go before the corresponding right parenthesis ')'.
4. '*' could be treated as a single right parenthesis ')' or a single left parenthesis '(' or an empty string.
5. An empty string is also valid.

<strong>Example 1:</strong>
```
Input: "()"
Output: True
```
<strong>Example 2:</strong>
```
Input: "(*)"
Output: True
```
<strong>Example 3:</strong>
```
Input: "(*))"
Output: True
```
<strong>Note:</strong>
- The string size will be in the range [1, 100].


## Debug
```cpp
class Solution {
public:
    bool checkValidString(string s) {

    }
};
```

🐛 Online Debuging: https://leetcode-cn.com/problems/valid-parenthesis-string/

## AC Code
<div>
	  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/678.%20Valid%20Parenthesis%20String/678_valid-parenthesis-string.cpp">:shipit: C++</a> | 
	  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/678.%20Valid%20Parenthesis%20String/678_valid-parenthesis-string.py">🐍 Python </a> | 
	  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/678.%20Valid%20Parenthesis%20String/678_valid-parenthesis-string.java">♨️ Java </a>
</div>
