# Set 

- Associative container
- Each element has to be unique
- Stored in a sorted order

-------------------------------------------

### Time Complexity

- Insert, Delete : O(logn)

-------------------------------------------

### Example

```
#include <set>

std::set<data_type> se;

se.size();

se.insert(data);
se.erase(data);
se.clear();

// Return iterator
se.find(data);

// If data exist, return 1 else 0
se.count(data);

for(auto iter = se.begin(); iter != se.end(); iter++)
		std::cout << *iter << "\n";

```

--------------------------------------------
