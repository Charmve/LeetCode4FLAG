<img src="https://img.shields.io/static/v1.svg?style=for-the-badge&label=difficulty&message=easy&color=green"/>

## 139. Word Break

Given a <strong>non-empty</strong> string s and a dictionary wordDict containing a list of <strong>non-empty</strong> words, determine if s can be segmented into a space-separated sequence of one or more dictionary words.

<strong>Note:</strong>

- The same word in the dictionary may be reused multiple times in the segmentation.
- You may assume the dictionary does not contain duplicate words.

<strong>Example 1:</strong>

Input: s = "leetcode", wordDict = ["leet", "code"]
Output: true
Explanation: Return true because "leetcode" can be segmented as "leet code".

<strong>Example 2:</strong>
```
Input: s = "applepenapple", wordDict = ["apple", "pen"]
Output: true
Explanation: Return true because "applepenapple" can be segmented as "apple pen apple".
             Note that you are allowed to reuse a dictionary word.
```
<strong>Example 3:</strong>
```
Input: s = "catsandog", wordDict = ["cats", "dog", "sand", "and", "cat"]
Output: false
```


## Debug
```cpp
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {

    }
};
```

🐛 Online Debuging: https://leetcode-cn.com/problems/word-break

## AC Code
<div>
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/139.%20Word%20Break/139_word-break.cpp">:shipit: C++</a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/139.%20Word%20Break/139_word-break.py">🐍 Python </a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/139.%20Word%20Break/139_word-break.java">♨️ Java </a>
</div>
