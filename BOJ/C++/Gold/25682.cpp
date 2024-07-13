#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int N, M, K, expected, minimum = INT_MAX, repaint_white, repaint_black;
		std::cin >> N >> M >> K;

		std::vector<std::vector<int>> board(N, std::vector<int>(M));
		char tmp;

		for (int i = 0; i < N; i++) {
				for (int j = 0; j < M; j++) {
					std::cin >> tmp;
					board[i][j] = (tmp == 'W') ? 0 : 1;
				}
		}

		std::vector<std::vector<int>> white(N, std::vector<int>(M, 0));
		std::vector<std::vector<int>> black(N, std::vector<int>(M, 0));

		for (int i = 0; i < N; i++) {
				for (int j = 0; j < M; j++) {
						expected = ((i + j) % 2 == 0) ? 0 : 1;
						white[i][j] = (board[i][j] != expected);

						expected = ((i + j) % 2 == 0) ? 1 : 0;
						black[i][j] = (board[i][j] != expected);	
				}
		}

		std::vector<std::vector<int>> sum_white(N + 1, std::vector<int>(M + 1, 0));
		std::vector<std::vector<int>> sum_black(N + 1, std::vector<int>(M + 1, 0));

		for (int i = 1; i <= N; i++) {
				for (int j = 1; j <= M; j++) {
					sum_white[i][j] = white[i - 1][j - 1] + sum_white[i - 1][j] + sum_white[i][j - 1] - sum_white[i - 1][j - 1];
					sum_black[i][j] = black[i - 1][j - 1] + sum_black[i - 1][j] + sum_black[i][j - 1] - sum_black[i - 1][j - 1];
				}
		}

		for (int i = 0; i <= N - K; ++i) {
				for (int j = 0; j <= M - K; ++j) {
						repaint_white = sum_white[i + K][j + K] - sum_white[i][j + K] - sum_white[i + K][j] + sum_white[i][j];
						repaint_black = sum_black[i + K][j + K] - sum_black[i][j + K] - sum_black[i + K][j] + sum_black[i][j];
						minimum = std::min({minimum, repaint_white, repaint_black});
        }
    }

    std::cout << minimum << '\n';

    return 0;
}

