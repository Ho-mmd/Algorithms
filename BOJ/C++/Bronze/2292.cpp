#include <iostream>

int main() {
		int N, cnt = 1, add = 1, ans = 1;
		
		std::cin >> N;

		while(1) {
				if(N <= cnt)
						break;
				cnt += add * 6;
				add++;
				ans++;
		}

		std::cout << ans;

		return 0;
}
