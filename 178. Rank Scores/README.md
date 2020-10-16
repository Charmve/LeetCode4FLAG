## Description

Write a SQL query to rank scores. If there is a tie between two scores, both should have the same ranking. Note that after a tie, the next ranking number should be the next consecutive integer value. In other words, there should be no "holes" between ranks.
```
+----+-------+
| Id | Score |
+----+-------+
| 1  | 3.50  |
| 2  | 3.65  |
| 3  | 4.00  |
| 4  | 3.85  |
| 5  | 4.00  |
| 6  | 3.65  |
+----+-------+
```
For example, given the above ``Scores`` table, your query should generate the following report (order by highest score):
```
+-------+---------+
| score | Rank    |
+-------+---------+
| 4.00  | 1       |
| 4.00  | 1       |
| 3.85  | 2       |
| 3.65  | 3       |
| 3.65  | 3       |
| 3.50  | 4       |
+-------+---------+
```
<strong>Important Note</strong>: For MySQL solutions, to escape reserved words used as column names, you can use an apostrophe before and after the keyword. For example <strong>`Rank`</strong>.


## Debug
```cpp
# Write your MySQL query statement below


```

🐛 Online Debuging: https://leetcode-cn.com/problems/rank-scores/

## AC Code
<div>
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/178.%20Rank%20Scores/178_rank-scores.cpp">:shipit: C++</a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/178.%20Rank%20Scores/178_rank-scores.py">🐍 Python </a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/178.%20Rank%20Scores/178_rank-scores.java">♨️ Java </a>
</div>
