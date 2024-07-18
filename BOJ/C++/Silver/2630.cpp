#include <iostream>

int paper[129][129] = {0, };
int white = 0, blue = 0;

void divide(int sx, int sy, int gap) {
		int cnt = 0, flag;

		for(int i = sx; i < sx + gap; i++) {
				flag = 0;

				for(int j = sy; j < sy + gap; j++) {
						if(paper[sx][sy] != paper[i][j]) {
								flag = 1;
								break;
						}
				}
				
				if(flag)
						break;
		}
	
		if(flag) {
				divide(sx, sy, gap / 2);
				divide(sx, sy + gap / 2, gap / 2);
				divide(sx + gap / 2, sy, gap / 2);
				divide(sx + gap / 2, sy + gap / 2, gap / 2); 
		} else {
				if(paper[sx][sy] == 0)
						white++;
				else
						blue++;
		}
}

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);
		
		int N;
		
		std::cin >> N;

		for(int i = 0; i < N; i++) 
				for(int j = 0; j < N; j++) 
						std::cin >> paper[i][j];

		divide(0, 0, N);

		std::cout << white << "\n" << blue;

		return 0;
}
