#include <iostream>
#include <map>

#define DIV 1000000007

std::map<long long, long long> m;

long long fib(long long n) {
		if(m[n])
				return m[n];
		
		if(n % 2 == 0) 
				m[n] = (fib(n / 2) * (fib(n / 2 + 1) % DIV + fib(n / 2 - 1) % DIV)) % DIV;
		else 
				m[n] = (fib((n + 1) / 2) * fib((n + 1) / 2) % DIV + fib((n - 1) / 2) * fib((n - 1) / 2) % DIV) % DIV;
		

		return m[n] % DIV;
}

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		long long n;

		std::cin >> n;

		m[0] = 0;
		m[1] = 1;
		m[2] = 1;

		fib(n);

		std::cout << m[n];

		return 0;
}
