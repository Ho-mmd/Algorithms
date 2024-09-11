#include <iostream>
#include <vector>
#include <algorithm>

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int N, tmp;
		std::vector<int> v;

		std::cin >> N;
		std::make_heap(v.begin(), v.end(), std::greater<int>());

		for(int i = 0; i < N; i++) {
				std::cin >> tmp;
				
				if(tmp == 0) {
						if(v.size() == 0)
								std::cout << "0\n";
						else {
								std::pop_heap(v.begin(), v.end(), std::greater<int>());
								std::cout << v.back() << "\n";
								v.pop_back();
						}
				} else {
						v.push_back(tmp);
						std::push_heap(v.begin(), v.end(), std::greater<int>());
				}
		}

		return 0;
}
