# String

- Represent a sequence of characters as an object of the class
- Stores the characters as a sequence of bytes with the functionality of allowing access to the single-byte character

-----------------------------------------------------

### Example

```
#include <string>

std::string str;
std::string tmp;

// Store a stream of characters as entered
// Can store blank
std::getline(std::cin, str);
std::getline(std::cin, tmp);

// Input character end of string 
str.push_back('a');

// Delete last character of string
str.pop_back();

char copied[20];

// Copy 10 str characters start from index 0 
str.copy(copied, 10, 0);

// Swap str and tmp
str.swap(tmp);

// Return the capacity (more or equal than the size of string)
str.capacity();

// Resize string size
str.resize(10);

// Decrease the capacity of the string equal to the minimum capacity
str.shrink_to_fit();
```
