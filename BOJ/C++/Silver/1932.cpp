#include <iostream>
#include <vector>

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int n, num;
		std::vector<int> tmp;
		std::vector<std::vector<int>> v;

		std::cin >> n;

		for(int i = 0; i < n; i++) {
				for(int j = 0; j <= i; j++) {
						std::cin >> num;
						tmp.push_back(num);
				}

				v.push_back(tmp);
				tmp.clear();
		}

		for(int i = n - 1; i > 0; i--) {
				for(int j = 0; j < i; j++) {
						v[i - 1][j] = std::max(v[i][j] + v[i - 1][j], v[i][j + 1] + v[i - 1][j]);
				}
		}

		std::cout << v[0][0];

		return 0;
}
