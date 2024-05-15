#include <iostream>
#include <vector>

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int n, num, tmp, max;
		std::vector<int> v;

		std::cin >> n;

		for(int i = 0; i < n; i++) {
				std::cin >> num;
				v.push_back(num);
		}

		max = v[0];
		tmp = v[0];

		for(int i = 1; i < n; i++) {
				if(v[i] > tmp + v[i])
						tmp = v[i];
				else
						tmp = tmp + v[i];

				if(tmp > max)
						max = tmp;

		}

		std::cout << max;

		return 0;
}
