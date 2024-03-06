#include <iostream>

int main() {
		int N, M = 1, sum, tmp;

		std::cin >> N;

		while(1) {
				tmp = M;
				sum = M;
				while(1) {
						sum += tmp % 10;
						tmp /= 10;
						if(tmp < 1)
								break;
				}

				if(sum == N) {
						std::cout << M;
						return 0;
				} else if (M > N) {
						std::cout << 0;
						return 0;
				}

				M++;
		}
}
