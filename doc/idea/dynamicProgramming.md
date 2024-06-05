# Dynamic Programming

- Overlapping Sub_Problem
- Optimal Sub_Structure
- Create a cache to store value (Memoization) and solve problems through recursion or loops
- Find & Interpret parameters (Important!)

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

-----------------------------------------

### LCS (Longest Common Subsequence)

- The longest subsequence among subsequences when comparing two strings A and B

```
#include <iostream>
#include <string>

int main()
{
    int dp[1001][1001] = {0, };
	std::string A = "ABCDE", B = "EDBAC";

    for(int i = 0; i < A.length(); i++) {
			for(int j = 0; j < B.length(); j++) {
                    // i = 0 || j = 0 -> dp[i][j] = 0
                    // i, j > 0 && A[i] == B[j] -> dp[i][j] = dp[i - 1][j - 1] + 1;
                    // i, j > 0 && A[i] != B[j] -> dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);

					if(A[i] == B[j]) 
							dp[i + 1][j + 1] = dp[i][j] + 1;
					else
							dp[i + 1][j + 1] = std::max(dp[i + 1][j], dp[i][j + 1]);
			}
	}

    std::cout << dp[A.length()][B.length()];

    return 0;
}
```
-----------------------------------------

### KnapSack 

- Finding the maximum value that can be contained in a bag without exceeding its weight

```
#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N, K, W, V;
    int dp[101][100001] = {0, };
    std::vector<std::pair<int, int>> v;

    std::cin >> N >> K;

    for (int i = 0; i < N; i++) {
        std::cin >> W >> V;
        v.push_back(std::make_pair(W, V));
    }


    for (int i = 1; i <= N; i++) {    
        for (int j = 1; j <= K; j++) {
            if (v[i - 1].first <= j)
                dp[i][j] = std::max(dp[i - 1][j], v[i - 1].second + dp[i - 1][j - v[i - 1].first]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    std::cout << dp[N][K];

    return 0;
}

```
