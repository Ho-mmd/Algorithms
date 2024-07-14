#include <iostream>
#include <vector>
#include <climits>

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int N, tmp;
		long long min = INT_MAX, cost = 0;
		std::vector<int> dist, price;

		std::cin >> N;

		for(int i = 0; i < N - 1; i++) {
				std::cin >> tmp;
				dist.push_back(tmp);
		}

		for(int i = 0; i < N; i++) {
				std::cin >> tmp;
				price.push_back(tmp);
		}

		for(int i = 0; i < N; i++) {
				if(price[i] < min)
						min = price[i];
				
				cost += min * dist[i];
		}

		std::cout << cost;

		return 0;
}
