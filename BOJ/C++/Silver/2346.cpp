#include <iostream>
#include <deque>
#include <cmath>

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int N, tmp;
		std::pair<int, int> par;
		std::deque<std::pair<int, int>> deq;

		std::cin >> N;

		for(int i = 0; i < N; i++) {
				std::cin >> tmp;
				par = std::make_pair(i + 1, tmp);
				deq.push_back(par);
		}

		std::cout << 1 << " ";
		tmp = deq.front().second;
		deq.pop_front();

		for(int i = 0; i < N - 1; i++) {
				if(tmp > 0) { 
						for(int i = 0; i < tmp - 1; i++) {
								par = deq.front();
								deq.push_back(par);
								deq.pop_front();
						}
				} else {
						for(int i = 0; i < abs(tmp); i++) {
								par = deq.back();
								deq.push_front(par);
								deq.pop_back();	
						}
				}

				std::cout << deq.front().first << " ";
				tmp = deq.front().second;
				deq.pop_front();

		}

		return 0;
}

