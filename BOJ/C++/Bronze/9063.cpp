#include <iostream>

int main() {
		int N, x, y, max_x = -10000, max_y = -10000, min_x = 10000, min_y = 10000;

		std::cin >> N;

		for(int i = 0; i < N; i++) {
				std::cin >> x >> y;

				if(N == 1) {
						std::cout << "0";
						return 0;
				}

				if(x > max_x)
						max_x = x;
				if(y > max_y)
						max_y = y;
				if(x < min_x)
						min_x = x;
				if(y < min_y)
						min_y = y;
		}

		std::cout << (max_x - min_x) * (max_y - min_y);

		return 0;
}
