#include <iostream>
#include <string>

int main() {
		int N, M, min = 64, wTmp, bTmp;

		std::string whiteChess[8] = {
				"WBWBWBWB",
				"BWBWBWBW",
				"WBWBWBWB",
				"BWBWBWBW",
				"WBWBWBWB",
				"BWBWBWBW",
				"WBWBWBWB",
				"BWBWBWBW"
		};
		std::string blackChess[8] = {
				"BWBWBWBW",
				"WBWBWBWB",
				"BWBWBWBW",
				"WBWBWBWB",
				"BWBWBWBW",
				"WBWBWBWB",
				"BWBWBWBW",
				"WBWBWBWB"
		};	

		std::cin >> N >> M;

		std::string *board = new std::string[N];

		for(int i = 0; i < N; i++) {
				std::cin >> board[i];
		}

		for(int x = 0; x < N - 7; x++) {
				for(int y = 0; y < M - 7; y++) {		
						wTmp = 0;
						bTmp = 0;
						for(int i = 0; i < 8; i++) {
								for(int j = 0; j < 8; j++) {
										if(whiteChess[i][j] != board[i + x][j + y])
												wTmp++;
										if(blackChess[i][j] != board[i + x][j + y])
												bTmp++;
								}
						}
						if(wTmp <= bTmp && wTmp < min)
								min = wTmp;
						else if(bTmp <= wTmp && bTmp < min)
								min = bTmp;
				}
		}

		std::cout << min;

		delete[] board;


		return 0;
}
