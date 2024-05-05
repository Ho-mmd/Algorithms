#include <iostream>
#include <cmath>

void hanoi(int n, int from, int by, int to) {
		if(n == 0)
				return;
		else {
				hanoi(n - 1, from, to, by);
				std::cout << from << " " << to << "\n";
				hanoi(n - 1, by, from, to);
		}
}

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int n;

		std::cin >> n;

		std::cout << int(pow(2, n)) - 1 << "\n";

		hanoi(n, 1, 2, 3);

		return 0;
}
