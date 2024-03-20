# Queue

- Container adaptor with FIFO (First In First Out)
- Elements are inserted at the back end and are deleted from the front

-----------------------------------------------------

### Example

```
#include <queue>

std::queue<data_type> que;

que.push(data);

// Return front value
que.front();
// Return end value
que.back();

// Remove front value
que.pop();

que.size();

// If empty, return 1 else 0 
que.empty();
```
