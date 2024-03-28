### Coordinate Compression

An algorithm used to know only the relationship between numbers, regardless of the value of the number

```
// If input is [1, 50, 100, 1000, 10000]
// Output is [0, 1, 2, 3, 4]

// If input is [3, -10, 9, 3, 11]
// Output is [1, 0, 2, 1, 3]

// If input is [8, 7, 7, 8]
// Output is [1, 0, 0, 1]
```

--------------------------------------

### Euclidean-algorithm

An algorithm used to get 'Greatest Commom Divisor' by using Modulo
Modulo : Math operation that finds the remainder when one integer is divided by another

```
// Supposed a is bigger than b

// Loop
int gcd(int a, int b) {
		int tmp;
		
		while(b) {
				tmp = a % b;
				a = b;
				b = tmp;
		}	

		return a;
}

// Recursion
int gcd(int a, int b) {
		if(b == 0)
				return a;

		return gcd(b, a % b);
}
```

--------------------------------------
