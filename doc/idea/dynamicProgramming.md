# Dynamic Programming

- Overlapping Sub_Problem
- Optimal Sub_Structure
- Create a cache to store value (Memoization) and solve problems through recursion or loops

-----------------------------------------

## Top-down

- Solve big problems by breaking them down into smaller problems
- Solved with recursion

-----------------------------------------

## Bottom-up

- Solve big problems by solving small problems
- Solved with loops

-----------------------------------------

### Kadane's Algorithm

- One of techniques in Dynamic Programming
- Used to find the subarray with the largest sum in a sequence
- O(N)

```
#include <iostream>
#include <algorithm>

int main()
{
    int v[5] = {5, -3, 1, 2, 7};
    int global_max = v[0], local_max = v[0];

    for (int i = 1; i < n; i++)
    {
        local_max = max(v[i], local_max + v[i]);

        if(local_max > global_max)
            global_max = local_max;
    }

    cout << global_max;

    return 0;
}
```

-----------------------------------------

### LIS (Longest Increasing Subsequence)

- Among the partial sequences created by selecting some elements of an array
- A partial sequence satisfies the condition that each element is greater than the previous element 
- A partial sequence has the maximum length
- O(N^2)

```
#include <iostream>

int main()
{
    int length = 1;
	int A[5] = {1, 7, 3, 2, 5}, dp[5];

    for(int i = 0; i < 5; i++) {
			dp[i] = 1;

			for(int j = 0; j < i; j++) {
					if(A[j] < A[i] && dp[i] <= dp[j]) 
							dp[i] = dp[j] + 1;
					if(length < dp[i])
							length = dp[i];
			}
	}

    std::cout << length;

    return 0;
}
```
