#include <iostream>
#include <deque>

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int N, cmd;
		std::deque<int> deq;

		std::cin >> N;

		for(int i = 0; i < N; i++) {
				std::cin >> cmd;

				switch(cmd) {
						case 1:
								std::cin >> cmd;
								deq.push_front(cmd);
								break;
						case 2:
								std::cin >> cmd;
								deq.push_back(cmd);
								break;
						case 3:
								if(deq.empty())
										std::cout << -1 << "\n";
								else {
										std::cout << deq.front() << "\n";
										deq.pop_front();
								}
								break;
						case 4:
								if(deq.empty())
										std::cout << -1 << "\n";
								else {
										std::cout << deq.back() << "\n";
										deq.pop_back();
								}
								break;
						case 5:
								std::cout << deq.size() << "\n";
								break;
						case 6:
								if(deq.empty())
										std::cout << 1 << "\n";
								else {
										std::cout << 0 << "\n";
								}
								break;
						case 7:
								if(deq.empty())
										std::cout << -1 << "\n";
								else 
										std::cout << deq.front() << "\n";
								
								break;
						case 8:
								if(deq.empty())
										std::cout << -1 << "\n";
								else 
										std::cout << deq.back() << "\n";
								break;
				}
		}
		
		return 0;
}
