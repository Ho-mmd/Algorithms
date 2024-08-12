#include <iostream>
#include <set>

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int N, M, num;

		std::cin >> N;

		std::set<int> A;
		std::set<int>::iterator iter;

		for(int i = 0; i < N; i++) {
				std::cin >> num;
				A.insert(num);
		}

		iter = A.end();

		std::cin >> M;

		for(int i = 0; i < M; i++) {
				std::cin >> num;
				
				if(A.find(num) == iter)
						std::cout << 0 << "\n";
				else
						std::cout << 1 << "\n";
		}

		return 0;
}
