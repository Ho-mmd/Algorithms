#include <iostream>
#include <stack>
#include <string>

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int T, j;
		std::stack<char> stk;
		std::string bracket;

		std::cin >> T;

		for(int i = 0; i < T; i++) {
				std::cin >> bracket;

				for(j = 0; j < bracket.size(); j++) {
						if(bracket[j] == '(')
								stk.push(bracket[j]);
						else if(stk.size() > 0)
								stk.pop();
						else {
								std::cout << "NO" << "\n";
								break;
						}
				}
				
				if(j == bracket.size()) {
						if(stk.size() == 0)
								std::cout << "YES" << "\n";
						else
								std::cout << "NO" << "\n";
				}	

				stk = std::stack<char>();
		}

		return 0;
}
