## Description
Given an m x n 2d grid map of '1's (land) and '0's (water), return the number of islands.

An <strong>island</strong> is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

<strong>Example 1:</strong>

```
Input: grid = [
  ["1","1","1","1","0"],
  ["1","1","0","1","0"],
  ["1","1","0","0","0"],
  ["0","0","0","0","0"]
]
Output: 1
```

<strong>Example 2:</strong>

```
Input: grid = [
  ["1","1","0","0","0"],
  ["1","1","0","0","0"],
  ["0","0","1","0","0"],
  ["0","0","0","1","1"]
]
Output: 3
```

<strong>Constraints:</strong>

- m == grid.length
- n == grid[i].length
- 1 <= m, n <= 300
- grid[i][j] is '0' or '1'.


## Debug
```cpp
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {

    }
};
```

🐛 Online Debuging: https://leetcode-cn.com/problems/number-of-islands/

## AC Code
<div>
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/200.%20Number%20of%20Islands/200_number-of-islands.cpp">:shipit: C++</a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/200.%20Number%20of%20Islands/200_number-of-islands.py">🐍 Python </a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/200.%20Number%20of%20Islands/200_number-of-islands.java">♨️ Java </a>
</div>
