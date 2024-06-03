#include <iostream>
#include <string>

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int dp[1001][1001] = {0, };
		std::string str1, str2;

		std::cin >> str1 >> str2;

		for(int i = 0; i < str1.length(); i++) {
				for(int j = 0; j < str2.length(); j++) {
						if(str1[i] == str2[j])
								dp[i + 1][j + 1] = dp[i][j] + 1;
						else 
								dp[i + 1][j + 1] = std::max(dp[i + 1][j], dp[i][j + 1]);
				}
		}
		
		std::cout << dp[str1.length()][str2.length()];

		return 0;
}
