#include <iostream>

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int N, M, num, x1, y1, x2, y2;
		int arr[1025][1025] = {0, };
		long long sum = 0;

		std::cin >> N >> M;

		for(int i = 1; i <= N; i++) {
				for(int j = 1; j <= N; j++) {
						std::cin >> num;
						arr[i][j] = arr[i][j - 1] + arr[i - 1][j] - arr[i - 1][j - 1] + num;
				}
		}

		for(int i = 0; i < M; i++) {
				std::cin >> x1 >> y1 >> x2 >> y2;
			
				sum = arr[x2][y2] - arr[x2][y1 - 1] - arr[x1 - 1][y2] + arr[x1 - 1][y1 - 1];
				std::cout << sum << "\n";
		}

		return 0;
}
