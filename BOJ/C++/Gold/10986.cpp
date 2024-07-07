#include <iostream>

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int N, M, num;
		long long sum[10001] = {0, };
        long long tmp = 0, cnt = 0;
    
		std::cin >> N >> M;

		for(int i = 0; i < N; i++) {
				std::cin >> num;

				tmp += num;
				sum[tmp % M]++;
		}

		for(int i = 0; i < M; i++) {
				if(sum[i] != 0) 
						cnt += sum[i] * (sum[i] - 1) / 2;
		}

		std::cout << cnt + sum[0];

		return 0;
}
