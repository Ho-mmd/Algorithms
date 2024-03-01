#include <iostream>
#include <algorithm>

int main() {
		int arr[3];

		std::cin >> arr[0] >> arr[1] >> arr[2];
		std::sort(arr, arr + 3);

		if(arr[2] >= arr[0] + arr[1])
				std::cout << (arr[0] + arr[1]) * 2 - 1;
		else 
				std::cout << arr[0] + arr[1] + arr[2];

		return 0;
}

