#include <iostream>

long long factorial(int n) {
		if(n <= 1)
				return 1;
		else
				return n * factorial(n - 1);
}

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int N;

		std::cin >> N;

		std::cout << factorial(N);

		return 0;
}
