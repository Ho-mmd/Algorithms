#include <iostream>

long long fivo(int n) {
		if(n == 0)
				return 0;
		else if(n <= 2)
				return 1;
		else
				return fivo(n - 1) + fivo(n - 2);
}

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int n;

		std::cin >> n;

		std::cout << fivo(n);

		return 0;
}
