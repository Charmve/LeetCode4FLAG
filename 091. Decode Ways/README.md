## Description
A message containing letters from A-Z is being encoded to numbers using the following mapping:
```
'A' -> 1
'B' -> 2
...
'Z' -> 26
```
Given a <strong>non-empty</strong> string containing only digits, determine the total number of ways to decode it.

The answer is guaranteed to fit in a <strong>32-bit</strong> integer.

<strong>Example 1:</strong>
```
Input: s = "12"
Output: 2
Explanation: It could be decoded as "AB" (1 2) or "L" (12).
```
<strong>Example 2:</strong>
```
Input: s = "226"
Output: 3
Explanation: It could be decoded as "BZ" (2 26), "VF" (22 6), or "BBF" (2 2 6).
```
<strong>Example 3:</strong>

```
Input: s = "0"
Output: 0
Explanation: There is no character that is mapped to a number starting with '0'. We cannot ignore a zero when we face it while decoding. So, each '0' should be part of "10" --> 'J' or "20" --> 'T'.
```
<strong>Example 4:</strong>

```
Input: s = "1"
Output: 1
```

<strong>Constraints:</strong>

- 1 <= s.length <= 100
- ``s`` contains only digits and may contain leading zero(s).


## Debug
```cpp
class Solution {
public:
    int numDecodings(string s) {

    }
};
```

🐛 Online Debuging: https://leetcode-cn.com/problems/decode-ways

## AC Code
<div>
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/091.%20Decode%20Ways/91_decode-ways.cpp">:shipit: C++</a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/091.%20Decode%20Ways/91_decode-ways.py">🐍 Python </a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/091.%20Decode%20Ways/91_decode-ways.java">♨️ Java </a>
</div>
