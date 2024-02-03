#include <iostream>
#include <vector>

int main() {
		int N, B;
		std::vector<int> ans;

		std::cin >> N >> B;

		while(N > 0) {
				ans.insert(ans.begin(), N % B);
				N /= B;
		}

		for(int i = 0; i < ans.size(); i++) {
				if(ans[i] > 9)
						std::cout << char(ans[i] - 10 + 'A');
				else
						std::cout << ans[i];
		}

		return 0;

}
