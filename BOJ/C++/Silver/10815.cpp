#include <iostream>
#include <set>

int main() {
		std::set<int> card;
		int N, M, k;

		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		std::cin >> N;

		for(int i = 0 ; i < N; i++) {
				std::cin >> k;
				card.insert(k);
		}

		std::cin >> M;

		for(int i = 0; i < M; i++) {
				std::cin >> k;
				if(card.count(k) == 1)
						std::cout << 1 << " ";
				else
						std::cout << 0 << " ";
		}
    
    return 0;
}
