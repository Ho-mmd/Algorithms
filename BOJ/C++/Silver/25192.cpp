#include <iostream>
#include <string>
#include <set>

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int N, tot = 0;
		std::set<std::string> being;
		std::string name;

		std::cin >> N;

		for(int i = 0; i < N; i++) {
				std::cin >> name;

				if(name != "ENTER")
						being.insert(name);
				else {
						tot += being.size();
						being = std::set<std::string>();
				}
		}

		std::cout << tot + being.size();

		return 0;
}
