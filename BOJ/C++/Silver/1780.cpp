#include <iostream>
#include <vector>

int negative = 0, zero = 0, positive = 0;
std::vector<std::vector<int>> v;

void divide(int sx, int sy, int gap) {
		int flag = 0;

		for(int i = sx; i < sx + gap; i++) {
				for(int j = sy; j < sy + gap; j++) {
						if(v[sx][sy] != v[i][j]) {
								flag = 1;
								break;
						}
				}

				if(flag)
						break;
		}

		if(!flag) {
				if(v[sx][sy] == -1)
						negative++;
				else if(v[sx][sy] == 1)
						positive++;
				else
						zero++;
		} else {
				gap = gap / 3;

				divide(sx, sy, gap);
				divide(sx, sy + gap, gap);
				divide(sx, sy + 2 * gap, gap);
				divide(sx + gap, sy, gap);
				divide(sx + gap, sy + gap, gap);
				divide(sx + gap, sy + 2 * gap, gap);
				divide(sx + 2 * gap, sy, gap);
				divide(sx + 2 * gap, sy + gap, gap);
				divide(sx + 2 * gap, sy + 2 * gap, gap);
		}
}

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int N, tmp;

		std::cin >> N;

		for(int i = 0; i < N; i++) {
				std::vector<int> tmv;
				
				for(int j = 0; j < N; j++) {
						std::cin >> tmp;
						tmv.push_back(tmp);
				}

				v.push_back(tmv);
		}

		divide(0, 0, N);

		std::cout << negative << "\n" << zero << "\n" << positive;

		return 0;
}
