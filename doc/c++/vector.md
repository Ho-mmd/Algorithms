# Vector

- Same as Dynamic arrays
- Placed in contiguous storage
- Can use iterators
- Data inserted in the end

------------------------------------------------------

### Time Complexity

- Search : O(n)
- Insert, Delete in the end: O(1)

------------------------------------------------------

### Example

```
#include <vector>


std::vector<data_type> v;

// Initialize vector
std::vector<data_type> v1(size, value);

// Insert value in the end
v1.push_back(value);

// Return vector size
v1.size();

// Resize vector size
v1.resize(value);

// Remove all elements in vector
v1.clear();

for(auto iter = v1.begin(); iter != v1.end(); iter++)
		std::cout << *iter << "\n";
		
for(int i = 0; i < v1.size(); i++)
		std::cout << v1[i] << "\n";

```
