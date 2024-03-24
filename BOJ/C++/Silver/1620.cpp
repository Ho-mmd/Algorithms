#include <iostream>
#include <map>
#include <string>

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int N, M;
		std::string name, search;
		std::map<std::string, std::string> pocket1;
		std::map<std::string, std::string> pocket2;

		std::cin >> N >> M;

		for(int i = 0; i < N; i++) {
				std::cin >> name;
				pocket1.insert(std::make_pair(name, std::to_string(i + 1)));
				pocket2.insert(std::make_pair(std::to_string(i + 1), name));
		}

		for(int i = 0; i < M; i++) {
				std::cin >> search;

				auto it = pocket1.find(search);

				if(it == pocket1.end()) {
						it = pocket2.find(search);
						std::cout << it->second << "\n";
				} else {
						std::cout << it->second << "\n";
				}
		}

}
