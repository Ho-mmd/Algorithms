#include <iostream>
#include <map>
#include <string>

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int N, M, cnt = 0;
		std::string name;
		std::map<std::string, int> mp;
		std::map<std::string, int>::iterator iter;

		std::cin >> N >> M;

		for(int i = 0; i < N + M; i++) {
				std::cin >> name;
				
				iter = mp.find(name);

				if(iter == mp.end()) {
						mp.insert(make_pair(name, 0));
				} else {
						cnt++;
						mp[name] += 1;
				}
		}

		std::cout << cnt << "\n";

		for(iter = mp.begin(); iter != mp.end(); iter++) {
				if(iter->second >= 1)
						std::cout << iter->first << "\n";
		}

		return 0;
}
