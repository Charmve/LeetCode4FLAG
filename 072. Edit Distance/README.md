## 72. Edit Distance
Given two strings ``word1`` and ``word2``, return the minimum number of operations required to convert ``word1`` to ``word2``.

You have the following three operations permitted on a word:

- <i>Insert</i> a character
- <i>Delete</i> a character
- <i>Replace</i> a character
 

<strong>Example 1:</strong>
```
Input: word1 = "horse", word2 = "ros"
Output: 3
Explanation: 
horse -> rorse (replace 'h' with 'r')
rorse -> rose (remove 'r')
rose -> ros (remove 'e')
```

<strong>Example 2:</strong>
```
Input: word1 = "intention", word2 = "execution"
Output: 5
Explanation: 
intention -> inention (remove 't')
inention -> enention (replace 'i' with 'e')
enention -> exention (replace 'n' with 'x')
exention -> exection (replace 'n' with 'c')
exection -> execution (insert 'u')
```

<strong>Constraints:</strong>

- 0 <= word1.length, word2.length <= 500
- word1 and word2 consist of lowercase English letters.


## Debug
```cpp
class Solution {
public:
    vector<string> letterCombinations(string digits) {

    }
};
```

🐛 Online Debuging: https://leetcode-cn.com/problems/edit-distance

## AC Code
<div>
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/072.%20Edit%20Distance/72_edit-distance.cpp">:shipit: C++</a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/072.%20Edit%20Distance/72_edit-distance.py">🐍 Python </a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/072.%20Edit%20Distance/72_edit-distance.java">♨️ Java </a>
</div>
