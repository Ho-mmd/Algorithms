# Divide and Conquer

- Solve a problem by dividing it into smaller problems
- Steps
    - Divide : Divide problem
    - Conquer : Solve subproblem recursively
    - Combine : Solve the original problem by combining the answer to subproblem
- Usage
    - Merge sort
    - Quick sort
    - Binary search
    - FFT


---------------------------------------

### Merge sort

---------------------------------------

### Quick sort

---------------------------------------

### Binary search

---------------------------------------

### Power problem

- Idea : x^n 
		- if n % 2 == 0
				- x^n = x^(n/2) * x^(n/2)
		- else
				- x^n = x^(n/2) * x^(n/2) * x

```
long long power(long long x, long long n) {
    if (n == 0)
        return 1;
    
    if (n % 2 == 0) {
        long long half = power(x, n / 2);
        return half * half;
    } else {
        return x * power(x, n - 1);
    }
}
```
---------------------------------------

### Max Distance Problem

- Idea: Divide the array into two parts based on the mid
		- Find max_l from left part
		- Find max_r from right part
		- Find max_mid from mid part (toward_left, toward_right)

```
std::vector<long long> v;

long long solve(int l, int r, int m) {
		int to_l = m, to_r = m;
		long long min = v[m], max = v[m];

		while(to_l > l || to_r < r) {
				if(to_r < r && (to_l == l || v[to_l - 1] < v[to_r + 1])) {
						to_r++;
						min = std::min(min, v[to_r]);
				} else {
						to_l--;
						min = std::min(min, v[to_l]);
				}

				max = std::max(max, min * (to_r - to_l + 1));
		}

		return max;
		
}

long long divide(int l, int r) {
		if(l > r)
				return 0;
		else if(l == r)
				return v[l];

		long long max_l, max_r, max_m;
		int m = (l + r) / 2;

		max_l = divide(l, m);
		max_r = divide(m + 1, r);
		max_m = solve(l, r, m);

		return std::max({max_l, max_r, max_m});
}
```
---------------------------------------
