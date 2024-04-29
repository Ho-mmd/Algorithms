#include <iostream>
#include <cmath>
#include <vector>

std::vector<char> uni;

void cantor(int start, int end, int N) {
		int tmp, i;

		if(N == 0)
				return;
		else {
				tmp = pow(3, N - 1);
				for(i = start + tmp; i <start + tmp * 2; i++)
						uni[i] = ' ';

				cantor(start, tmp - 1, N - 1);
				cantor(i, end, N - 1); 
		}
}

int main() {
		std::ios_base::sync_with_stdio(false);

		int N, num;

		while(std::cin >> N) {
				num = pow(3, N);

				for(int i = 0; i < num; i++)
						uni.push_back('-');

				cantor(0, num - 1, N);

				for(int i = 0; i < num; i++)
						std::cout << uni[i];
			
				std::cout << "\n";

				uni.clear();
		}	

		return 0;
}
