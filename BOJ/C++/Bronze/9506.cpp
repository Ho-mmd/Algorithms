#include <iostream>
#include <vector>

int main() {
		int n, tot;
		std::vector<int> divisor;

		while(1) {
				tot = 0;
				std::cin >> n;

				if(n == -1)
						break;

				for(int i = 1; i < n; i++) {
						if(n % i == 0)
								divisor.push_back(i);
				}

				for(int i = 0; i < divisor.size(); i++) {
						tot += divisor[i];
				}

				if(tot == n) {
						std::cout << n << " = ";
						for(int i = 0; i < divisor.size() - 1; i++)
								std::cout << divisor[i] << " + ";
						std::cout << divisor[divisor.size() - 1] << "\n";
				} else {
						std::cout << n << " is NOT perfect.\n";
				}

				/*
				 * size : Number of components in vector
				 * capacity : Size of vector
				 */
				// Make vector size and internal value to 0
				divisor.clear();
				// Make vector capacity to 0
				divisor.shrink_to_fit();
		}

		return 0;
}
