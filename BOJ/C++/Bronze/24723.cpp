#include <iostream>
#include <cmath>

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int N, ans;

		std::cin >> N;

		ans = std::pow(2, N);
		
		std::cout << ans;

		return 0;
}
