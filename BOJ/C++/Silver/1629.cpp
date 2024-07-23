#include <iostream>
#include <cmath>

long long A, B, C, mod;

long long Multi(long long b) {
		if(b == 0)
				return 1;

		mod = Multi(b / 2) % C;

		if(b % 2 == 0)
				return mod * mod % C;
		else
				return mod * mod % C * A % C;
}

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		std::cin >> A >> B >> C;

		std::cout << Multi(B);

		return 0;
}
