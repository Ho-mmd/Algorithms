#include <iostream>
#include <array>

std::array<int, 41> f;
int cntRe = 0, cntDy = 0;

int fib(int N) {
		if(N <= 2) {
				cntRe++;
				return 1;
		}
		else {
				return fib(N - 1) + fib(N - 2);
		}
}

void fibo(int N) {
		if(N <= 2)
				f[N] = 1;
		else
				for(int i = 3; i <= N; i++) {
						f[i] = f[i - 1] + f[i - 2];
						cntDy++;
				}

		return ;
}

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int N;

		std::cin >> N;

		fib(N);
		fibo(N);

		std::cout << cntRe << " " << cntDy;

		return 0;
}
