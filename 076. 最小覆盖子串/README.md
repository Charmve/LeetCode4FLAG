<img src="https://img.shields.io/static/v1.svg?style=for-the-badge&label=difficulty&message=hard&color=red"/>


## Description

给你一个字符串 `s` 、一个字符串 `t` 。返回 `s` 中涵盖 `t` 所有字符的最小子串。如果 `s` 中不存在涵盖 `t` 所有字符的子串，则返回空字符串 `""` 。
 

<strong>注意：</strong>

- 对于 ``t`` 中重复字符，我们寻找的子字符串中该字符数量必须不少于 `t` 中该字符数量。
- 如果 ``s`` 中存在这样的子串，我们保证它是唯一的答案。
 

<strong>示例 1：</strong>
```
输入：s = "ADOBECODEBANC", t = "ABC"
输出："BANC"
```

<strong>示例 2：</strong>
```
输入：s = "a", t = "a"
输出："a"
```

<strong>示例 3:</strong>
```
输入: s = "a", t = "aa"
输出: ""
解释: t 中两个字符 'a' 均应包含在 s 的子串中，
因此没有符合条件的子字符串，返回空字符串。
```

<strong>提示：</strong>

- ``1 <= s.length, t.length <= 105``
- `s` 和 `t` 由英文字母组成
 

<strong>进阶</strong>：你能设计一个在 ``o(n)`` 时间内解决此问题的算法吗？


## Debug
```cpp
class Solution {
public:
    string minWindow(string s, string t) {
    
};
```

🐛 Online Debuging: https://leetcode-cn.com/problems/minimum-window-substring/

## AC Code
<div>
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/076.%20最小覆盖子串/76_minimum-window-substring.cpp">:shipit: C++</a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/076.%20最小覆盖子串/76_minimum-window-substring.py">🐍 Python </a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/076.%20最小覆盖子串/76_minimum-window-substring.java">♨️ Java </a>
</div>
