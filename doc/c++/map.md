# Map

- Associative container
- Store elements in a mapped fashion
- Each elements is stored in memory independently
- Each element has a key value and a mapped value
- No two mapped values can have the same key values
- Store data in ascending order of key values

------------------------------------------------------

### Time Complexity

- Approach : O(logn)
- Search : O(logn)
- Insert, Delete : O(logn)

------------------------------------------------------

### Example

```
#include <map>


std::map<key_type, value_type> ma;

ma.insert(std::make_pair(key, value));

ma.size();

// Return iterator
ma.find(key);

// Return value
ma.at(key);

// If key exist, return 1 else 0
ma.count(key);

ma.erase(key);

// Remove all elements in map
ma.clear();

for(auto iter = ma.begin(); iter != ma.end(); iter++)
		std::cout << iter->first << " " << iter->second << "\n";

```
