#include <iostream>
#include <map>

int main() {
		
		int N, seq = 0;
		std::map<int, int> ans;

		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		std::cin >> N;

		int *tmp = new int[N];

		for(int i = 0; i < N; i++) {
				std::cin >> tmp[i];
				ans.insert(std::make_pair(tmp[i], i));
		}

		for(auto iter = ans.begin(); iter != ans.end(); iter++) {
				iter->second  = seq;
				seq++;
		}

		for(int i = 0; i < N; i++)
				std::cout << ans.find(tmp[i])->second << " ";

		delete[] tmp;

		return 0;
}
