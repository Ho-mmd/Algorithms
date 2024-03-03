#include <iostream>

int main() {
		int n, cnt = 0;

		std::cin >> n;

		for(int i = 1; i < n; i++)
				cnt += i;

		std::cout << cnt << "\n2";

		return 0;
}

