#include <iostream>

int arr[51][51][51] = {0, };

int w(int a, int b, int c) {
		if(a <= 0 || b <= 0 || c <= 0)
				return 1;
		else if(arr[a][b][c] != 0)
				return arr[a][b][c];
		else if(a > 20 || b > 20 || c > 20)
				arr[a][b][c] = w(20, 20, 20);
		else if (a < b && b < c) 
				arr[a][b][c] = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
		else
				arr[a][b][c] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);

		return arr[a][b][c];
}

int main() {
		int a = 0, b = 0, c = 0;

		while(1) {
				std::cin >> a >> b >> c;
						
				if(a == -1 && b == -1 && c == -1)
						break;

				std::cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << "\n";
		}

		return 0;
}
