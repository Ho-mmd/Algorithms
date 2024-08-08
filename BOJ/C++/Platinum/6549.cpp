#include <iostream>
#include <vector>
#include <algorithm>

std::vector<long long> v;

long long midToLR(int l, int r, int m) {
		int to_l = m, to_r = m;
		long long min = v[m], max = v[m];

		while(to_l > l || to_r < r) {
				if(to_r < r && (to_l == l || v[to_l - 1] < v[to_r + 1])) {
						to_r++;
						min = std::min(min, v[to_r]);
				} else {
						to_l--;
						min = std::min(min, v[to_l]);
				}

				max = std::max(max, min * (to_r - to_l + 1));
		}

		return max;
		
}

long long solve(int l, int r) {
		if(l > r)
				return 0;
		else if(l == r)
				return v[l];

		long long max_l, max_r, max_m;
		int m = (l + r) / 2;

		max_l = solve(l, m);
		max_r = solve(m + 1, r);
		max_m = midToLR(l, r, m);

		return std::max({max_l, max_r, max_m});
}

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);
		
		int n;
		long long h;

		while(std::cin >> n) {
				if(n == 0)
						break;

				for(int i = 0; i < n; i++) {
						std::cin >> h;
						v.push_back(h);
				}

				std::cout << solve(0, n - 1) << "\n";
				v.clear();
		}

		return 0;
}
