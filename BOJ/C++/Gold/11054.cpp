#include <iostream>

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int N, max = 0;
		int A[1001], dp_in[1001], dp_de[1001];

		std::cin >> N;
		
		for(int i = 0; i < N; i++)
				std::cin >> A[i];

		for(int i = 0; i < N; i++) {
				dp_in[i] = 1;

				for(int j = 0; j < i; j++) {
						if(A[i] > A[j] && dp_in[i] <= dp_in[j])
								dp_in[i] = dp_in[j] + 1;
				}
		}
		
		for(int i = N - 1; i >= 0; i--) {
				dp_de[i] = 1;

				for(int j = N - 1; j > i; j--) {
						if(A[i] > A[j] && dp_de[i] <= dp_de[j])
								dp_de[i] = dp_de[j] + 1;
				}
		}

		for(int i = 0; i < N; i++) {
				dp_in[i] += dp_de[i];

				if(dp_in[i] > max)
						max = dp_in[i] - 1;
		}

		std::cout << max;

		return 0;
}
