#include <iostream>
#include <set>
#include <vector>

int gcd(int a, int b) {
		if(b == 0)
				return a;

		return gcd(b, a % b);
}

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int N, num1, num2, tmp, last, se_last, ans = 0;
		std::set<int> gap;
		std::vector<int> gap_all;
		std::set<int>::iterator iter;		

		std::cin >> N;

		std::cin >> num1;

		for(int i = 0; i < N - 1; i++) {
				std::cin >> num2;

				gap.insert(num2 - num1);
				gap_all.push_back(num2 - num1);

				num1 = num2;
		}

		while(gap.size() != 1) {
				iter = gap.end();
				--iter;
				last = *iter;
				
				gap.erase(iter);

				iter = gap.end();
				--iter;
				se_last = *iter;

				tmp = gcd(last, se_last);
				gap.insert(tmp);	
		}

		iter = gap.begin();
		tmp = *iter;

		for(int i = 0; i < gap_all.size(); i++) {
				ans += gap_all[i] / tmp - 1;		
		}

		std::cout << ans;

		return 0;
}
