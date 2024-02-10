#include <iostream>

int main() {
		int X, i = 1;

		std::cin >> X;

		// Search what line X located
		while(1) {
				if(X <= i)
						break;
				X -= i;
				i++;
		}

		// odd : numerator < denominator
		// even : numerator > denominator
		if(i % 2 == 0)
				std::cout << X << "/" << i - X + 1;
		else
				std::cout << i - X + 1 << "/" << X;

		return 0;
}
