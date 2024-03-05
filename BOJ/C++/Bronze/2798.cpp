#include <iostream>
#include <algorithm>
#include <vector>

int main() {
		int N, M, num, ans = 0;
		std::vector<int> card;	

		std::cin >> N >> M;

		for(int i = 0;  i < N; i++) {
				std::cin >> num;
				card.push_back(num);
		}

		sort(card.begin(), card.end());

		for(int i = 0; i < N - 2; i++)
				for(int j = i + 1; j < N - 1; j++)
						for(int k = j + 1; k < N; k++) {
								if(card[i] + card[j] + card[k] == M) {
										std::cout << M;
										return 0;
								} else {
										if(ans <= card[i] + card[j] + card[k] && card[i] + card[j] + card[k] < M)
												ans = card[i] + card[j] + card[k];
								}
						}

		std::cout << ans;

		return 0;

}
