#include <iostream>
#include <vector>
#include <climits>

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int N, K, tmp, max = INT_MIN;
		std::vector<int> v;

		std::cin >> N >> K;

		for(int i = 0; i < N; i++) {
				std::cin >> tmp;
				v.push_back(tmp);
		}

		for(int i = 0; i <= N - K; i++) {
				tmp = 0;

				for(int j = i; j < i + K; j++) {
						tmp += v[j];
				}

				if(max < tmp)
						max = tmp;
		}

		std::cout << max;

		return 0;
}
