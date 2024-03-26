#include <set>
#include <iostream>

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		std::set<int> A, B;
		std::set<int>::iterator tmp;
		int N, M, num;

		std::cin >> N >> M;

		for(int i = 0; i < N; i++) {
				std::cin >> num;
				A.insert(num);
		}
		
		for(int i = 0; i < M; i++) {
				std::cin >> num;
				B.insert(num);
		}

		for(auto iter = A.begin(); iter != A.end(); iter++) {
				tmp = B.find(*iter);

				if(tmp != B.end())
						M--;
		}

		for(auto iter = B.begin(); iter != B.end(); iter++) {
				tmp = A.find(*iter);

				if(tmp != A.end())
						N--;
		}

		std::cout << N << " " << M << " " << N + M;

		return 0;
}
