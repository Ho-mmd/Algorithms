#include <iostream>
#include <vector>

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int N, M, ans, start, end, tmp;
		std::vector<int> v;

		std::cin >> N >> M;

		for(int i = 0; i < N; i++) { 
				std::cin >> tmp;
				v.push_back(tmp);
		}

		for(int i = 0; i < M; i++) {
				std::cin >> start >> end;
				ans = 0;

				for(int j = start - 1; j < end; j++)
						ans += v[j];

				std::cout << ans << "\n";
		}

		return 0;
}
