#include <iostream>

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int n, num;
		int dp[10001], arr[10001];

		std::cin >> n;

		for(int i = 1; i <= n; i++) {
				std::cin >> num;
				arr[i] = num;
		}

		dp[0] = 0;
		dp[1] = arr[1];
		dp[2] = dp[1] + arr[2];

		for(int i = 3; i <= n; i++) {
				dp[i] = std::max(dp[i - 3] + arr[i] + arr[i - 1], dp[i - 1]);
				dp[i] = std::max(dp[i], arr[i] + dp[i - 2]);
		}

		std::cout << dp[n];

		return 0;
}
