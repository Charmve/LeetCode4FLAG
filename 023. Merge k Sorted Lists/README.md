## Description

You are given an array of ``k`` linked-lists ``lists``, each linked-list is sorted in ascending order.

Merge all the linked-lists into one sorted linked-list and return it.

 

<strong>Example 1:</strong>
```
Input: lists = [[1,4,5],[1,3,4],[2,6]]
Output: [1,1,2,3,4,4,5,6]
Explanation: The linked-lists are:
[
  1->4->5,
  1->3->4,
  2->6
]
merging them into one sorted list:
1->1->2->3->4->4->5->6
```
<strong>Example 2:</strong>
```
Input: lists = []
Output: []
```
<strong>Example 3:</strong>
```
Input: lists = [[]]
Output: []
```

<strong>Constraints:</strong>

- k == lists.length
- 0 <= k <= 10^4
- 0 <= lists[i].length <= 500
- -10^4 <= lists[i][j] <= 10^4
- lists[i] is sorted in <strong>ascending order</strong>.
- The sum of lists[i].length won't exceed 10^4.


## Debug
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
    }
};
```

🐛 Online Debuging: https://leetcode-cn.com/problems/merge-k-sorted-lists

## AC Code
<div>
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/023.%20Merge%20k%20Sorted%20Lists/23_merge-k-sorted-lists.cpp">:shipit: C++</a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/023.%20Merge%20k%20Sorted%20Lists/23_merge-k-sorted-lists.py">🐍 Python </a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/023.%20Merge%20k%20Sorted%20Lists/23_merge-k-sorted-lists.java">♨️ Java </a>
</div>
