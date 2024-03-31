#include <iostream>

bool chkPrime(long long int num) {
		if(num <= 1)
				return false;
		else if(num == 2 || num == 3)
				return true;
		else if(num % 2 == 0 || num % 3 == 0)
				return false;
		else {
				for(long long int i = 5; i * i <= num; i++) {
						if(num % i == 0 || num % (i + 2) == 0)
								return false;
				}
		}
		
		return true;
}

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int n;
		long long int num;

		std::cin >> n;

		for(int i = 0; i < n; i++) {
				std::cin >> num;

				while(1) {
						if(chkPrime(num)) {
								std::cout << num << "\n";
								break;
						}

						num++;
				}
		}	

		return 0;
}
