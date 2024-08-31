#include <iostream>
#include <vector>
#include <algorithm>

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int N, x;
		std::vector<int> v;

		std::make_heap(v.begin(), v.end());

		std::cin >> N;

		for(int i = 0; i < N; i++) {
				std::cin >> x;

				if(x == 0) {
						if(v.empty())
								std::cout << 0 << "\n";
						else {
								std::cout << v[0] << "\n";
								std::pop_heap(v.begin(), v.end());
								v.pop_back();
						}
				} else {
						v.push_back(x);
						std::push_heap(v.begin(), v.end());
				}
		}

		return 0;
}
