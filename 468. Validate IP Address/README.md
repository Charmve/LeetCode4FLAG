## Description
Given a string IP, return ``"IPv4"`` if IP is a valid IPv4 address, ``"IPv6"`` if IP is a valid IPv6 address or ``"Neither"`` if IP is not a correct IP of any type.

<strong>A valid IPv4</strong> address is an IP in the form ``"x1.x2.x3.x4"`` where ``0 <= xi <= 255`` and ``xi`` <strong>cannot contain</strong> leading zeros. For example, ``"192.168.1.1"`` and ``"192.168.1.0"`` are valid IPv4 addresses but ``"192.168.01.1"``, while ``"192.168.1.00"`` and ``"192.168@1.1"`` are invalid IPv4 addresses.

<strong>A valid IPv6</strong> address is an IP in the form ``"x1:x2:x3:x4:x5:x6:x7:x8"`` where:

- 1 <= xi.length <= 4
- xi is a <strong>hexadecimal string</strong> which may contain digits, lower-case English letter (``'a'`` to ``'f'``) and upper-case English letters (``'A'`` to ``'F'``).
- Leading zeros are allowed in xi.

For example, ``"2001:0db8:85a3:0000:0000:8a2e:0370:7334"`` and ``"2001:db8:85a3:0:0:8A2E:0370:7334"`` are valid IPv6 addresses, while ``"2001:0db8:85a3::8A2E:037j:7334"`` and ``"02001:0db8:85a3:0000:0000:8a2e:0370:7334"`` are invalid IPv6 addresses.

 

<strong>Example 1:</strong>
```
Input: IP = "172.16.254.1"
Output: "IPv4"
Explanation: This is a valid IPv4 address, return "IPv4".
```
<strong>Example 2:</strong>
```
Input: IP = "2001:0db8:85a3:0:0:8A2E:0370:7334"
Output: "IPv6"
Explanation: This is a valid IPv6 address, return "IPv6".
```
<strong>Example 3:</strong>
```
Input: IP = "256.256.256.256"
Output: "Neither"
Explanation: This is neither a IPv4 address nor a IPv6 address.
```
<strong>Example 4:</strong>
```
Input: IP = "2001:0db8:85a3:0:0:8A2E:0370:7334:"
Output: "Neither"
```
<strong>Example 5:</strong>
```
Input: IP = "1e1.4.5.6"
Output: "Neither"
```

<strong>Constraints:</strong>

``IP`` consists only of English letters, digits and the characters ``'.'`` and ``':'``.

## Debug
```cpp
class Solution {
public:
    string validIPAddress(string IP) {

    }
};
```

🐛 Online Debuging: https://leetcode-cn.com/problems/validate-ip-address

## AC Code
<div>
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/468.%20Validate%20IP%20Address/468_validate-ip-address.cpp">:shipit: C++</a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/468.%20Validate%20IP%20Address/468_validate-ip-address.py">🐍 Python </a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/468.%20Validate%20IP%20Address/468_validate-ip-address.java">♨️ Java </a>
</div>
