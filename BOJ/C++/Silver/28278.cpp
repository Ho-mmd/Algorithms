#include <iostream>
#include <stack>

int main() {
		std::stack<int> stk;
		int N, cmd, num;

		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		std::cin >> N;

		for(int i = 0; i < N; i++) {
				std::cin >> cmd;

				if(cmd == 1) {
						std::cin >> num;
						stk.push(num);
				} else if(cmd == 2) {
						if(stk.size() != 0) {
								std::cout << stk.top() << "\n";
								stk.pop();
						}
						else
								std::cout << -1 << "\n";
				} else if(cmd == 3) {
						std::cout << stk.size() << "\n";
				} else if(cmd == 4) {
						if(stk.size() != 0)
								std::cout << 0 << "\n";
						else
								std::cout << 1 << "\n";
				} else if(cmd == 5) {
						if(stk.size() != 0)
								std::cout << stk.top() << "\n";
						else
								std::cout << -1 << "\n";
				}
		}

		return 0;
}
