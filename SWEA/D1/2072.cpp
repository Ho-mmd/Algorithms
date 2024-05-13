//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=1&contestProbId=AV5QSEhaA5sDFAUq&categoryId=AV5QSEhaA5sDFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=CCPP&select-1=1&pageSize=10&pageIndex=1

#include <iostream>

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int n, ans, tmp, cnt = 1;

		std::cin >> n;

		for(int i = 0; i < n; i++) {
				ans = 0;
				for(int j = 0; j < 10; j++) {
						std::cin >> tmp;

						if(tmp % 2 != 0)
								ans += tmp;
				}

				std::cout << "#" << cnt << " " << ans << "\n";
				cnt++;
		}
}
