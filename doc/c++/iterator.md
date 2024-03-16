# Iterator

- An object that can "iterate" (navigate) over elements
- Similar with 'Pointer'
- Use with 'begin()' and 'end()'
		- begin() : Represent start point of container
		- end() : Represent end point of container

```
container::iterator

// Frame
std::container con;

for(auto iter = con.begin(); iter != con.end; iter++) {
		......
}
```

---------------------------------------------------------

### Example

```
// Vector
std::vector<int> vec;
std::vector<int>::iterator iter;

for(iter = vec.begin(); iter != vec.end(); iter++)
		std::cout << *iter << "\n";

// Map
std::map<int, int> ma;
std::map<int, int>::iterator iter;

for(iter = ma.begin(); iter != ma.end(); iter++)
		std::cout << iter->first << " " << iter-> second << "\n";

```

----------------------------------------------------------
