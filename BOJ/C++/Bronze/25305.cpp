#include <iostream>
#include <algorithm>

int main() {
		int N, k;
		
		std::cin >> N >> k;

		int *x = new int[N];

		for(int i = 0; i < N; i++)
				std::cin >> x[i];

		std::sort(x, x + N, std::greater<int>());

		std::cout << x[k - 1];

		delete[] x;

		return 0;
}

