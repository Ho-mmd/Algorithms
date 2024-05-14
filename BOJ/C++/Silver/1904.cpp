#include <iostream>

int arr[1000001] = {0, 1, 2, };

void cnt(int N) {
		if(N <= 2)
				return ;
		else {
				for(int i = 3; i <= N; i++) {
						arr[i] = (arr[i - 1] + arr[i - 2]) % 15746;
				}
		}

		return ;
}

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int N;

		std::cin >> N;

		cnt(N);

		std::cout << arr[N];

		return 0;
}
