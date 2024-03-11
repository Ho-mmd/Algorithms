#include <iostream>
#include <algorithm>

int main() {
		int arr[5], ans = 0;

		for(int i = 0; i < 5; i++) {	
				std::cin >> arr[i];
				ans += arr[i];
		}

		std::sort(arr, arr + 5);


		std::cout << ans / 5 << "\n" << arr[2];		
}
