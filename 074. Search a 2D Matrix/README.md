## Description

Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

- Integers in each row are sorted from left to right.
- The first integer of each row is greater than the last integer of the previous row.


<b>Example 1:</b>

<div align="center">
  <img src="https://assets.leetcode.com/uploads/2020/10/05/mat.jpg" alt="example1">
</div>
<br>


```
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,50]], target = 3
Output: true
```

<b>Example 2:</b>

<div align="center">
  <img src="https://assets.leetcode.com/uploads/2020/10/05/mat2.jpg" alt="example2">
</div>
<br>

```
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,50]], target = 13
Output: false
```

<strong>Example 3:</strong>

```
Input: matrix = [], target = 0
Output: false
```

<strong>Constraints:</strong>

- m == matrix.length
- n == matrix[i].length
- 0 <= m, n <= 100
- -10<sup>4</sup> <= matrix[i][j], target <= 10<sup>4</sup>

## Solution

<strong>Method: Binary Search</strong>

注意到输入的 m x n 矩阵可以视为长度为 m x n 的有序数组。

<div align="center">
  <img src="https://pic.leetcode-cn.com/d9b47b40a4de17b0c56446b0a4935a5042490ea1d92a6f4c529c2aaa0095c189-287711dcb87bd4d4681fa117f792d1baaaa7ce3e2c65d6a4f6439c0cbbb0345e-image.png" alt="solution">
</div>
<br>

由于该虚数组的序号可以由下式方便地转化为原矩阵中的行和列 (我们当然不会真的创建一个新数组) ，该有序数组非常适合二分查找。

> ``row = idx / n`` ， ``col = idx % n``

<strong>Algorithm</strong>

这是一个标准二分查找算法 :

- 初始化左右序号
``left = 0`` 和 ``right = m x n - 1``。

- While ``left < right`` :

-- 选取虚数组最中间的序号作为中间序号: ``pivot_idx = (left + right) / 2``。

-- 该序号对应于原矩阵中的 ``row = pivot_idx / n``行 ``col = pivot_idx % n`` 列, 由此可以拿到中间元素``pivot_element``。该元素将虚数组分为两部分。

-- 比较 ``pivot_element`` 与 ``target`` 以确定在哪一部分进行进一步查找。


## Debug
```cpp
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

    }
};
```

🐛 Online Debuging: https://leetcode-cn.com/problems/search-a-2d-matrix/

## AC Code
<div>
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/074.%20Search%20a%202D%20Matrix/74_search-a-2d-matrix.cpp">:shipit: C++</a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/074.%20Search%20a%202D%20Matrix/74_search-a-2d-matrix.py">🐍 Python </a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/074.%20Search%20a%202D%20Matrix/74_search-a-2d-matrix.java">♨️ Java </a>
</div>
