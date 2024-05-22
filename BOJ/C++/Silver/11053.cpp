#include <iostream>

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int N, length = 1;
		int A[1001] = {0, }, dp[1001];

		std::cin >> N;

		for(int i = 0; i < N; i++)
				std::cin >> A[i];

		for(int i = 0; i < N; i++) {
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
