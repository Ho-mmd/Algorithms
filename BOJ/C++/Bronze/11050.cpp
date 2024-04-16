#include <iostream>

int factorial(int n) {
		if(n <= 1)
				return n;
		else
				return n * factorial(n - 1);
}

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int N, K, tmp1, tmp2, tmp3;

		std::cin >> N >> K;

		tmp1 = factorial(N);
		tmp2 = factorial(K);
		tmp3 = factorial(N - K);

		std::cout << tmp1 / (tmp2 * tmp3);

		return 0;
}
