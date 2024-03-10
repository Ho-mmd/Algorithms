#include <iostream>
#include <algorithm>

int main() {
		int N;

		std::cin >> N;

		int *arr = new int[N];

		for(int i = 0; i < N; i++)
				std::cin >> arr[i];

		std::sort(arr, arr + N);

		for(int i = 0; i < N; i++) {
				std::cout << arr[i];
				if(i < N - 1)
						std::cout << "\n";
		}

		delete[] arr;

		return 0;
}
