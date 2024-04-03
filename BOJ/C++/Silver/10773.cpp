#include <iostream>
#include <stack>

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int K, num, ans = 0;
		std::stack<int> stk;

		std::cin >> K;

		for(int i = 0; i < K; i++) {
				std::cin >> num;

				if(num != 0)
						stk.push(num);
				else
						stk.pop();
		}

		while(stk.size() > 0) {
				ans += stk.top();
				stk.pop();
		}

		std::cout << ans;

		return 0;
}
