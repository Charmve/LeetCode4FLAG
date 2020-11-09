## Description
Implement an iterator over a binary search tree (BST). Your iterator will be initialized with the root node of a BST.

Calling next() will return the ``next`` smallest number in the BST.

 

<strong>Example:</strong>
<div align="left">
  <img align="center" src="https://assets.leetcode.com/uploads/2018/12/25/bst-tree.png">
</div>
<br>

```
BSTIterator iterator = new BSTIterator(root);
iterator.next();    // return 3
iterator.next();    // return 7
iterator.hasNext(); // return true
iterator.next();    // return 9
iterator.hasNext(); // return true
iterator.next();    // return 15
iterator.hasNext(); // return true
iterator.next();    // return 20
iterator.hasNext(); // return false
```

<strong>Note:</strong>

- ``next()`` and ``hasNext()`` should run in average O(1) time and uses O(h) memory, where h is the height of the tree.
- You may assume that ``next()`` call will always be valid, that is, there will be at least a next smallest number in the BST when ``next()`` is called.


## Debug
```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:
    BSTIterator(TreeNode* root) {

    }
    
    /** @return the next smallest number */
    int next() {

    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {

    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
```

🐛 Online Debuging: https://leetcode-cn.com/problems/binary-search-tree-iterator/

## AC Code
<div>
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/173.%20Binary%20Search%20Tree%20Iterator/173_binary-search-tree-iterator.cpp">:shipit: C++</a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/173.%20Binary%20Search%20Tree%20Iterator/173_binary-search-tree-iterator.py">🐍 Python </a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/173.%20Binary%20Search%20Tree%20Iterator/173_binary-search-tree-iterator.java">♨️ Java </a>
</div>
