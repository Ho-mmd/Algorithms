# Deque

- Containers with the feature of expansion and contraction on both ends
- Similar to vectors, but are more efficient in case of insertion and deletion of elements

-----------------------------------------------------

### Time Complexity

- Accessing Elements- O(1)
- Insertion or removal of elements- O(n)
- Insertion or removal of elements at start or end- O(1)

-------------------------------------------------------

### Example

```
#include <deque>

std::deque<data_type> deq;

// Insert value
deq.push_front(data);
deq.push_back(data);

// Check value
deq.front();
deq.back();

// Remove value
deq.pop_front();
deq.pop_back();

deq.size();

```
