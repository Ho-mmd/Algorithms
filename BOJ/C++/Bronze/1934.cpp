#include <iostream>

int gcd(int a, int b) {
		if(b == 0)
				return a;

		return gcd(b, a % b);
}

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int T, A, B, j;

		std::cin >> T;

		for(int i = 0; i < T; i++) {
				std::cin >> A >> B;
				
				if(A > B)
						std::cout << A * B / gcd(A, B) << "\n";
				else
						std::cout << A * B / gcd(B, A) << "\n";
					
		}

		return 0;
}
