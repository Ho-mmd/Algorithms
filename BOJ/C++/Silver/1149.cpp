#include <iostream>
#include <vector>
#include <climits>

int main() {
		std::ios_base::sync_with_stdio(false);
		//std::cin.tie(NULL);

		int num, N;
		std::vector<std::vector<int>> v;
		std::vector<std::vector<int>> dp;
		std::vector<int> tmp;
		
		std::cin >> N;
	
		for(int i = 0; i < N; i++) {
				for(int j = 0; j < 3; j++) {
						std::cin >> num;
						tmp.push_back(num);
				}
				v.push_back(tmp);
				tmp.clear();
		}
		
		dp = v;

		for(int i = 1; i < N; i++) {
				dp[i][0] = std::min(dp[i - 1][1], dp[i - 1][2]) + v[i][0];
				dp[i][1] = std::min(dp[i - 1][0], dp[i - 1][2]) + v[i][1];
				dp[i][2] = std::min(dp[i - 1][0], dp[i - 1][1]) + v[i][2];
		}

		std::cout << std::min(dp[N - 1][0], std::min(dp[N - 1][1], dp[N - 1][2]));

		return 0;
}
