## Description

Merge two sorted linked lists and return it as a new sorted list. The new list should be made by splicing together the nodes of the first two lists.

<strong>Example 1:</strong>


<div align="center">
  <img src="https://assets.leetcode.com/uploads/2020/10/03/merge_ex1.jpg" alt="example1">
</div>
<br>

```
Input: l1 = [1,2,4], l2 = [1,3,4]
Output: [1,1,2,3,4,4]
```

<strong>Example 2:</strong>

```
Input: l1 = [], l2 = []
Output: []
```

<strong>Example 3:</strong>
```
Input: l1 = [], l2 = [0]
Output: [0]
```

<strong>Constraints:</strong>

- The number of nodes in both lists is in the range [0, 50].
- ``-100 <= Node.val <= 100``
- Both l1 and l2 are sorted in <strong>non-decreasing</strong> order.

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
    }
};
```

## Code

<div>
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/https://github.com/Charmve/LeetCode4FLAG/tree/main/21.%20Merge%20Two%20Sorted%20Lists/21_merge-two-sorted-lists.cpp">:shipit: C++</a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/https://github.com/Charmve/LeetCode4FLAG/tree/main/21.%20Merge%20Two%20Sorted%20Lists/21_merge-two-sorted-lists.py">🐍 Python </a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/https://github.com/Charmve/LeetCode4FLAG/tree/main/21.%20Merge%20Two%20Sorted%20Lists/21_merge-two-sorted-lists.java">♨️ Java </a>
</div>
