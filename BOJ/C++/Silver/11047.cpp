#include <iostream>
#include <vector>

int main() { 
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);
		
		int N, K, value, ans = 0;
		std::vector<int> v;

		std::cin >> N >> K;

		for(int i = 0; i < N; i++) {
				std::cin >> value;
				v.push_back(value);
		}
		
		for(int i = N - 1; i >= 0; i--) {
				if(K == 0)
						break;
				else if(v[i] <= K) {
						ans += K / v[i];
						K %= v[i];
				}
		}

		std::cout << ans;

		return 0;
}	
