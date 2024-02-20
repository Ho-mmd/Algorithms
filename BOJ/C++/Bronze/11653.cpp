#include <iostream>

int main() {
		int N, i = 2;

		std::cin >> N;
		
		if(N != 1) {
				while(1) {
						if(N % i == 0) {
								std::cout << i << "\n";
								N /= i;
						}
						else
								i++;

						if(N < i)
								break;
				}
		}
				
		return 0;
}
