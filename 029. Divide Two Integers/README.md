## Description
Given two integers ``dividend`` and ``divisor``, divide two integers without using multiplication, division, and mod operator.

Return the quotient after dividing ``dividend`` by ``divisor``.

The integer division should truncate toward zero, which means losing its fractional part. For example, ``truncate(8.345) = 8`` and ``truncate(-2.7335) = -2``.

<strong>Note:</strong>

Assume we are dealing with an environment that could only store integers within the 32-bit signed integer range: [−2<sup>31</sup>,  2<sup>31</sup> − 1]. For this problem, assume that your function <strong>returns 2<sup>31</sup> − 1 when the division result overflows.</strong>
 

<strong>Example 1:</strong>
```
Input: dividend = 10, divisor = 3
Output: 3
Explanation: 10/3 = truncate(3.33333..) = 3.
```
<strong>Example 2:</strong>
```
Input: dividend = 7, divisor = -3
Output: -2
Explanation: 7/-3 = truncate(-2.33333..) = -2.
```
<strong>Example 3:</strong>
```
Input: dividend = 0, divisor = 1
Output: 0
```
<strong>Example 4:</strong>
```
Input: dividend = 1, divisor = 1
Output: 1
```

<strong>Constraints:</strong>

- -2<sup>31</sup> <= dividend, divisor <= 2<sup>31</sup> - 1
- divisor != 0


## Debug
```cpp
class Solution {
public:
    int divide(int dividend, int divisor) {

    }
};
```

🐛 Online Debuging: https://leetcode-cn.com/problems/divide-two-integers

## AC Code
<div>
	  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/029.%20Divide%20Two%20Integers/29_divide-two-integers.cpp">:shipit: C++</a> | 
	  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/029.%20Divide%20Two%20Integers/29_divide-two-integers.py">🐍 Python </a> | 
	  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/029.%20Divide%20Two%20Integers/29_divide-two-integers.java">♨️ Java </a>
</div>
