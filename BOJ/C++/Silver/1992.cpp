#include <iostream>
#include <string>

std::string arr[65];

void divide(int sx, int sy, int gap) {
		int flag = 0;

		for(int i = sx; i < sx + gap; i++) {
				for(int j = sy; j < sy + gap; j++) {
						if(arr[sx][sy] != arr[i][j]) {
								flag = 1;
								break;
						}
				}

				if(flag)
						break;
		}

		if(flag) {
				std::cout << "(";
				divide(sx, sy, gap / 2);
				divide(sx, sy + gap / 2, gap / 2);
				divide(sx + gap / 2, sy, gap / 2);
				divide(sx + gap / 2, sy + gap / 2, gap / 2);
				std::cout << ")";
		} else {
				if(arr[sx][sy] == '0')
						std::cout << 0;
				else
						std::cout << 1;
		}
}

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int N;

		std::cin >> N;

		for(int i = 0; i < N; i++)
						std::cin >> arr[i];
		
		divide(0, 0, N);

		return 0;
}
