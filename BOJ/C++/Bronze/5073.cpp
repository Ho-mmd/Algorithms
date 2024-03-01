#include <iostream>
#include <algorithm>


int main() {
		int arr[3];

		while(1) {
				std::cin >> arr[0] >> arr[1] >> arr[2];

				if(arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
						return 0;

				// Sorting in Descending Order
				std::sort(arr, arr + 3, std::greater<int>());

				if(arr[0] >= arr[1] + arr[2])
						std::cout << "Invalid\n";
				else if(arr[0] == arr[1] && arr[1] == arr[2])
						std::cout << "Equilateral\n";
				else if(arr[0] != arr[1] && arr[1] != arr[2] && arr[0] != arr[2])
						std::cout << "Scalene\n";
				else if((arr[0] == arr[1] && arr[1] != arr[2]) || (arr[0] == arr[2] && arr[2] != arr[1]) || (arr[1] == arr[2] && arr[2] != arr[0]))
						std::cout << "Isosceles\n";
	   }

		return 0;
}
