#include <iostream>

long long A = 1, B = 1, tmp;

long long power(long long mod) {
		if(mod == 0)
				return 1;

		tmp = power(mod / 2) % 1000000007;

		if(mod % 2 == 0)
				return tmp * tmp % 1000000007;

		return tmp * tmp % 1000000007 * B % 1000000007;
}

void sol(int N, int K) {
		long long ans;

		if(K == 0 || N == K) {
				std::cout << 1;
				return ;
		} else if(K == 1 || N - K == 1) {
				std::cout << N;
				return ;
		}

		for(int i = N - K + 1; i <= N; i++)
				A = (A * i) % 1000000007;

		for(int i = 1; i <= K; i++)
				B = (B * i) % 1000000007;

		ans = (A % 1000000007) * (power(1000000005) % 1000000007) % 1000000007;

		std::cout << ans;

		return;
}


int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);
		
		int N, K;

		std::cin >> N >> K;

		sol(N, K);

		return 0;
}
