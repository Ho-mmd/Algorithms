#include <iostream>
#include <vector>
#include <algorithm>

long long N, M, mid = 0;
std::vector<int> v;

long long solve(long long start, long long end) {
		if(start > end)
				return end;
		
		mid = (start + end) / 2;
		long long tmp = 0;
		
		for(int i = 0; i < N; i++)
				if(v[i] > mid)
						tmp += (v[i] - mid);

		if(tmp > M)
				return solve(mid + 1, end);
		else
				return solve(start, mid - 1);
}

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int h;
		long long tot = 0;

		std::cin >> N >> M;

		for(int i = 0; i < N; i++) {
				std::cin >> h;
				tot += h;
				v.push_back(h);
		}

		if(tot == M)
				std::cout << 0;
		else {
				int max = *std::max_element(v.begin(), v.end());
				std::cout << solve(1, max);
		}

		return 0;
}
