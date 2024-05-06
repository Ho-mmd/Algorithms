#include <iostream>
#include <vector>

int cnt = 0;

bool isPass(std::vector<int> &board, int row) {
		for(int i = 0; i < row; i++)
				if(board[i] == board[row] || abs(board[i] - board[row]) == row - i)
						return false;

		return true;
}

void dfs(std::vector<int> &board, int N, int row) {
		if(row == N)
				cnt++;
		else {
				for(int i = 0; i < N; i++) {
						board[row] = i;

						if(isPass(board, row))
								dfs(board, N, row + 1);
				}
		}
}

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int N;

		std::cin >> N;
		
		std::vector<int> board(N, 0);
		
		dfs(board, N, 0);
		
		std::cout << cnt;
		
		return 0;
}
