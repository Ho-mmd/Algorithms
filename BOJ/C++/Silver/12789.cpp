#include <iostream>
#include <stack>

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int N, seq, flag = 1;
		std::stack<int> stk;

		std::cin >> N;

		for(int i = 0; i < N; i++) {
				std::cin >> seq;
			
				if(seq == flag)
						flag++;
				else {
						while(!stk.empty() && stk.top() == flag) {
								flag++;
								stk.pop();
						}
						
						if(stk.empty())
								stk.push(seq);
						else if(stk.top() > seq)
								stk.push(seq);
						else
								break;
						
				}	
		}

		while(!stk.empty()) {
				if(stk.top() == flag) {
						stk.pop();
						flag++;
				}
				else
						break;
		}

		if(stk.empty())
				std::cout << "Nice";
		else
				std::cout << "Sad";

		return 0;
}
