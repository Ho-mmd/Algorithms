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
