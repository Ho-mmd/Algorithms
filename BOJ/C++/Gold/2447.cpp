#include <iostream>

void star(int x, int y, int N) {
		if((x / N) % 3 == 1 && (y / N) % 3 == 1)
				std::cout << " ";
		else {
				if(N / 3 == 0)
						std::cout << "*";
				else
						star(x, y, N / 3);
		}
}

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int N;

		std::cin >> N;

		for(int i = 0; i < N; i++) {
				for(int j = 0; j < N; j++) {
						star(i, j, N);				
				}

				std::cout << "\n";
		}

		return 0;
}
