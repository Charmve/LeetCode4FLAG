<img src="https://img.shields.io/static/v1.svg?style=for-the-badge&label=difficulty&message=easy&color=green"/>

## Description

Given a string s containing just the characters ``'('``, ``')'``, ``'{'``, ``'}'``, ``'['`` and ``']'``, determine if the input string is valid.

An input string is valid if:

1. Open brackets must be closed by the same type of brackets.<br>
2. Open brackets must be closed in the correct order.
 

<strong>Example 1:</strong>
```
Input: s = "()"
Output: true
```
<strong>Example 2:</strong>
```
Input: s = "()[]{}"
Output: true
```
<strong>Example 3:</strong>
```
Input: s = "(]"
Output: false
```
<strong>Example 4:</strong>
```
Input: s = "([)]"
Output: false
```
<strong>Example 5:</strong>
```
Input: s = "{[]}"
Output: true
```

<strong>Constraints:</strong>

- 1 <= s.length <= 10<sup>4</sup>
- s consists of parentheses only ``'()[]{}'``.



## Debug
```cpp
class Solution {
public:
    bool isValid(string s) {

    }
};
```

🐛 Online Debuging: https://leetcode-cn.com/problems/valid-parentheses/

## AC Code
<div>
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/020.%20Valid%20Parentheses/20_valid-parentheses.cpp">:shipit: C++</a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/020.%20Valid%20Parentheses/20_valid-parentheses.py">🐍 Python </a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/020.%20Valid%20Parentheses/20_valid-parentheses.java">♨️ Java </a>
</div>
