## 10. Regular Expression Matching

Given an input string (``s``) and a pattern (``p``), implement regular expression matching with support for '``.``' and '``*``' where: 

- ``'.'`` Matches any single character.​​​​
- ``'*'`` Matches zero or more of the preceding element.
The matching should cover the <strong>entire</strong> input string (not partial).

<strong>Example 1:</strong>
```
Input: s = "aa", p = "a"
Output: false
Explanation: "a" does not match the entire string "aa".
```

<strong>Example 2:</strong>

```
Input: s = "aa", p = "a*"
Output: true
Explanation: '*' means zero or more of the preceding element, 'a'. Therefore, by repeating 'a' once, it becomes "aa".
```

<strong>Example 3:</strong>
```
Input: s = "ab", p = ".*"
Output: true
Explanation: ".*" means "zero or more (*) of any character (.)".
```

<strong>Example 4:</strong>
```
Input: s = "aab", p = "c*a*b"
Output: true
Explanation: c can be repeated 0 times, a can be repeated 1 time. Therefore, it matches "aab".
```

<strong>Example 5:</strong>
```
Input: s = "mississippi", p = "mis*is*p*."
Output: false
```

<strong>Constraints:</strong>

- 0 <= s.length <= 20
- 0 <= p.length <= 30
- s contains only lowercase English letters.
- p contains only lowercase English letters, '``.``', and '``*``'.
- It is guaranteed for each appearance of the character '*', there will be a previous valid character to match.


## Debug
```cpp
class Solution {
public:
    vector<string> letterCombinations(string digits) {

    }
};
```

🐛 Online Debuging: https://leetcode-cn.com/problems/regular-expression-matching

## AC Code
<div>
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/010.%20Regular%20Expression%20Matching/10_regular-expression-matching.cpp">:shipit: C++</a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/010.%20Regular%20Expression%20Matching/10_regular-expression-matching.py">🐍 Python </a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/010.%20Regular%20Expression%20Matching/10_regular-expression-matching.java">♨️ Java </a>
</div>
