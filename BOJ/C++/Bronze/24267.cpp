#include <iostream>

int main() {
		long long n, num = 1, cnt = 0;

		std::cin >> n;

		for(int i =  n - 2; i >= 1; i--) {
				cnt += i * num;
				num += 1;
		}

		std::cout << cnt << "\n3";

		return 0;
}
