#include <iostream>
#include <vector>
#include <set>

std::set<int> se;
std::vector<int> dist;
int N, C, ans;

void solve(int low, int high) {
		if(low > high)
				return ;

		int mid = (low + high) / 2;
		int tmp, cnt = 1, pre_dist = 0;

		for(int i = 0; i < N - 1; i++) {
				tmp = dist[i] + pre_dist;

				if(tmp >= mid) {
						pre_dist = 0;
						cnt++;
				}
				else {
						pre_dist = tmp;
				}
		}

		if(cnt >= C) {
				ans = mid;
				return solve(mid + 1, high);
		}
		else
				return solve(low, mid - 1);
}

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int x, d;

		std::cin >> N >> C;

		for(int i = 0; i < N; i++) {
				std::cin >> x;
				se.insert(x);
		}

		for(auto iter = se.begin(); std::next(iter, 1) != se.end(); iter++) {
				d = *(std::next(iter, 1)) - *iter;
				dist.push_back(d);
		}

		solve(1, 1000000000);

		std::cout << ans;

		return 0;
}
