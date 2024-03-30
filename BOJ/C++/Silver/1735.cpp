#include <iostream>

int gcd(int a, int b) {
		if(b == 0)
				return a;

		return gcd(b, a % b);
}

int main() {
		int a, b, c, d;
		int tmp;

		std::cin >> a >> b >> c >> d;

		a = a * d + b * c;
		b *= d;

		if(a > b)
				tmp = gcd(a, b);
		else
				tmp = gcd(b, a);

		std::cout << a / tmp << " " << b / tmp;

		return 0;
}
