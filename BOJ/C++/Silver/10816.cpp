#include <iostream>
#include <map>

int main() {
		int N, M, num;
		std::map<int,int> mp;
		std::map<int, int>::iterator iter;

		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		std::cin >> N;

		for(int i = 0; i < N; i++) {
				std::cin >> num;
				iter = mp.find(num);

				if(iter == mp.end()) {
						mp.insert(std::make_pair(num, 1));
				} else {
						mp[num] += 1;
				}
		}

		std::cin >> M;

		for(int i = 0; i < M; i++) {
				std::cin >> num;
				iter = mp.find(num);
				std::cout << iter->second << " ";
		}

		return 0;
}
