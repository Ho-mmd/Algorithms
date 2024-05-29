#include <iostream>
#include <map>

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int N, x, y, cnt = 1;
		int dp[101] = {0, };
		std::map<int, int> m;
		std::map<int, int>::iterator iter, cmp;

		std::cin >> N;

		for(int i = 0; i < N; i++) {
				std::cin >> x >> y;
				m.insert(std::make_pair(x, y));	
		}

		cmp = m.begin();

		for(int i = 0; i < N; i++) {
				dp[i] = 1;
				iter = m.begin();
				
				for(int j = 0; j < i; j++) {
						if(dp[i] <= dp[j] && cmp->second > iter->second)
								dp[i] = dp[j] + 1;
						if(dp[i] > cnt)
								cnt = dp[i];

						iter++;
				}

				cmp++;
		}

		std::cout << N - cnt;

		return 0;
}
