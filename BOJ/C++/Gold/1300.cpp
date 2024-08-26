#include <iostream>

long long N, k;

long long solve(long long low, long long high) {
		if(low >= high)
				return low;

		long long mid = (low + high) / 2, tmp;
        long long cnt = 0;

		for(int i = 1; i <= N; i++) {
				tmp = mid / i;

				if(tmp > N)
						tmp = N;

				cnt += tmp;
		}

		if(cnt >= k)
				return solve(low, mid);
		else
				return solve(mid + 1, high);
}

int main() {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
    
		std::cin >> N >> k;

		std::cout << solve(1, N * N);

		return 0;
}
