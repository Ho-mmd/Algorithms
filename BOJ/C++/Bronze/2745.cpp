#include <iostream>
#include <string>

int main() {
		int tot = 0, A = 1, B;
		std::string N;
		std::cin >> N >> B;

		for(int i = N.size() - 1; i >= 0; i--) {
				if('0' <= N[i] && N[i] <= '9') {
						tot += ((int)(N[i] - '0')) * A;
				}
				else {
						tot += ((int)(N[i] - 'A') + 10) * A;
				}
				
				A *= B;
		}

		std::cout << tot;	
		return 0;
}

