## Description

Given two words (beginWord and endWord), and a dictionary's word list, find all shortest transformation sequence(s) from beginWord to endWord, such that:

1. Only one letter can be changed at a time
2. Each transformed word must exist in the word list. Note that beginWord is not a transformed word.

<strong>Note:</strong>

- Return an empty list if there is no such transformation sequence.
- All words have the same length.
- All words contain only lowercase alphabetic characters.
- You may assume no duplicates in the word list.
- You may assume beginWord and endWord are non-empty and are not the same.

<strong>Example 1:</strong>
```
Input:
beginWord = "hit",
endWord = "cog",
wordList = ["hot","dot","dog","lot","log","cog"]

Output:
[
  ["hit","hot","dot","dog","cog"],
  ["hit","hot","lot","log","cog"]
]
```

<strong>Example 2:</strong>
```
Input:
beginWord = "hit"
endWord = "cog"
wordList = ["hot","dot","dog","lot","log"]

Output: []

Explanation: The endWord "cog" is not in wordList, therefore no possible transformation.
```


## Debug
```cpp
class Solution {
public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {

    }
};
```

🐛 Online Debuging: https://leetcode-cn.com/problems/word-ladder-ii/

## AC Code
<div>
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/126.%20Word%20Ladder%20II/126_word-ladder-ii.cpp">:shipit: C++</a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/126.%20Word%20Ladder%20II/126_word-ladder-ii.py">🐍 Python </a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/126.%20Word%20Ladder%20II/126_word-ladder-ii.java">♨️ Java </a>
</div>
