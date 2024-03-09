#include <iostream>

int main() {
		int N, fiv = 0, thir = 0, tmp;
		
		std::cin >> N;

		fiv = N / 5;
		N %= 5;

		while(1) {
				if(N % 3 == 0) {
						thir = N / 3;
						std::cout << fiv + thir;
						return 0;
				} else {
						fiv--;
						N += 5;
				}

				if(fiv == -1) {
						std::cout << -1;
						return 0;
				}
		}
}

