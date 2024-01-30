#include <iostream>

int main() {
		int ans = 0, cnt, d, h, arr[100][100] = { 0 };

		std::cin >> cnt;

		for(int i = 0; i < cnt; i++) {
				std::cin >> d >> h;
				for(int j = h - 1; j < h + 9; j++) {
						for(int k = d - 1; k < d + 9; k++) {
								arr[j][k] = 1;
						}
				}
		}
		
		for(int i = 0; i < 100; i++) {
				for(int j = 0; j < 100; j++) {
						if(arr[i][j] == 1) {
								ans += 1;
						}
				}
		}


		std::cout << ans;

		return 0;

}
