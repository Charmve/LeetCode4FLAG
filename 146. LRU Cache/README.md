<img src="https://img.shields.io/static/v1.svg?style=for-the-badge&label=difficulty&message=easy&color=green"/>

## Description

Design a data structure that follows the constraints of a ``Least Recently Used (LRU) cache``.

Implement the LRUCache class:

``LRUCache(int capacity)`` Initialize the LRU cache with <strong>positive</strong> size ``capacity``.
int get(int key) Return the value of the key if the key exists, otherwise return -1.
void put(int key, int value) Update the value of the key if the key exists. Otherwise, add the key-value pair to the cache. If the number of keys exceeds the capacity from this operation, <strong>evict</strong> the least recently used key.
The functions get and put must each run in ``O(1)`` average time complexity.

 

<strong>Example 1</strong>:
```
Input

["LRUCache", "put", "put", "get", "put", "get", "put", "get", "get", "get"]
[[2], [1, 1], [2, 2], [1], [3, 3], [2], [4, 4], [1], [3], [4]]
Output
[null, null, null, 1, null, -1, null, -1, 3, 4]

Explanation

LRUCache lRUCache = new LRUCache(2);
lRUCache.put(1, 1); // cache is {1=1}
lRUCache.put(2, 2); // cache is {1=1, 2=2}
lRUCache.get(1);    // return 1
lRUCache.put(3, 3); // LRU key was 2, evicts key 2, cache is {1=1, 3=3}
lRUCache.get(2);    // returns -1 (not found)
lRUCache.put(4, 4); // LRU key was 1, evicts key 1, cache is {4=4, 3=3}
lRUCache.get(1);    // return -1 (not found)
lRUCache.get(3);    // return 3
lRUCache.get(4);    // return 4
 
```

<strong>Constraints:</strong>

- 1 <= capacity <= 3000
- 0 <= key <= 10<sup>4</sup>
- 0 <= value <= 10<sup>5</sup>
- At most 2 * 10<sup>5</sup> calls will be made to get and put.


## Debug
```cpp
class LRUCache {
public:
    LRUCache(int capacity) {

    }
    
    int get(int key) {

    }
    
    void put(int key, int value) {

    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
```

🐛 Online Debuging: https://leetcode-cn.com/problems/lru-cache

## AC Code
<div>
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/146.%20LRU%20Cache/146_lru-cache.cpp">:shipit: C++</a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/146.%20LRU%20Cache/146_lru-cache.py">🐍 Python </a> | 
  <a href="https://github.com/Charmve/LeetCode4FLAG/tree/main/146.%20LRU%20Cache/146_lru-cache.java">♨️ Java </a>
</div>
