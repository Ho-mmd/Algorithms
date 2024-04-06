#include <iostream>
#include <queue>
#include <string>

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int N, num;
		std::string cmd;
		std::queue<int> que;

		std::cin >> N;

		for(int i = 0; i < N; i++) {
				std::cin >> cmd;

				if(cmd == "push") {
						std::cin >> num;
						que.push(num);
				} else if(cmd == "pop") {
						if(que.empty())
								std::cout << -1 << "\n";
						else {
								std::cout << que.front() << "\n";
								que.pop();
						}
				} else if(cmd == "size")
						std::cout << que.size() << "\n";
				else if(cmd == "empty") {
						if(que.empty())
								std::cout << 1 << "\n";
						else
								std::cout << 0 << "\n";
				} else if(cmd == "front") {
						if(que.empty())
								std::cout << -1 << "\n";
						else
								std::cout << que.front() << "\n";
				} else if(cmd == "back") {
						if(que.empty())
								std::cout << -1 << "\n";
						else
								std::cout << que.back() << "\n";
				}
		}

		return 0;
}
