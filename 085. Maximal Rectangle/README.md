## Description

Given a rows x cols binary matrix filled with 0's and 1's, find the largest rectangle containing only 1's and return its area.

<div align="center">
  <img align="center" src="https://assets.leetcode.com/uploads/2020/09/14/maximal.jpg">
</div>
<br>

<strong>Example 1:</strong>

```
Input: matrix = [["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]
Output: 6

Explanation: The maximal rectangle is shown in the above picture.
```
<strong>Example 2:</strong>
```
Input: matrix = []
Output: 0
```
<strong>Example 3:</strong>
```
Input: matrix = [["0"]]
Output: 0
```
<strong>Example 4:</strong>
```
Input: matrix = [["1"]]
Output: 1
```
<strong>Example 5:</strong>
```
Input: matrix = [["0","0"]]
Output: 0
```

<strong>Constraints:</strong>

- rows == matrix.length
- cols == matrix.length
- 0 <= row, cols <= 200
- matrix[i][j] is '0' or '1'.


## Debug
```cpp
class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {

    }
};
```

🐛 Online Debuging: https://leetcode-cn.com/problems/maximal-rectangle/

## AC Code
<div>
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/085.%20Maximal%20Rectangle/85_maximal-rectangle.cpp">:shipit: C++</a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/085.%20Maximal%20Rectangle/85_maximal-rectangle.py">🐍 Python </a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/085.%20Maximal%20Rectangle/85_maximal-rectangle.java">♨️ Java </a>
</div>
