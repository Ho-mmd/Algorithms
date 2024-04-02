#include <iostream>

int main() {
		int n, cnt;

		bool *arr = new bool[246912];

		for(int i = 0; i < 246912; i++) {
				arr[i] = true;
		}	

		arr[0] = false;
		arr[1] = false;

		for(int i = 2; i * i < 246912; i++) {
			if(arr[i]) {
				for(int j = i * i; j < 246912; j += i)
					arr[j] = false;
			}
		}

		while(1) {
			std::cin >> n;

			if(n == 0)
				break;
			else if(n == 1)
				std::cout << 1 << "\n";
			else {
				for(int i = n + 1; i < 2 * n; i++)
					if(arr[i] == true)
						cnt++;

				std::cout << cnt << "\n";
			}
			
			cnt = 0;
		}

		delete[] arr;

		return 0;
}



