#include <iostream>

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int N;
		long long ans = 0;
		int arr[101][10];

		for(int i = 0; i < 10; i++)
				arr[0][i] = 1;

		std::cin >> N;

		for(int i = 1; i < N; i++) {
				for(int j = 0; j < 10; j++) {
						if(j == 0)
								arr[i][j] = arr[i - 1][1];
						else if(j == 9)
								arr[i][j] = arr[i - 1][8];
						else
								arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j + 1]);

						arr[i][j] %= 1000000000;
				}
		}
		
		for(int i = 1; i < 10; i++) {
				ans += arr[N - 1][i]; 
		}

		std::cout << ans % 1000000000;

		return 0;
}
