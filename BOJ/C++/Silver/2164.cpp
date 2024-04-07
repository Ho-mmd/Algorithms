#include <iostream>
#include <deque>

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int N;
		std::deque<int> deq;

		std::cin >> N;

		for(int i = 0; i < N; i++)
				deq.push_back(i + 1);

		while(deq.size() != 1) {
				deq.pop_front();
				deq.push_back(deq.front());
				deq.pop_front();
		}

		std::cout << deq.front();

		return 0;
}
