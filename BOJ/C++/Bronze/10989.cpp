#include <iostream>

int main() {

		int cnt[10000] = { 0 };
		int N, k;

		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		std::cin >> N;

		for(int i = 0; i < N; i++) {
				std::cin >> k;
				cnt[k - 1]++;
		}	
						
		for(int i = 0; i < 10000; i++)
				if(cnt[i] != 0)
						for(int j = 0; j < cnt[i]; j++)
								std::cout << i + 1 << "\n";
	
		return 0;
		
}
