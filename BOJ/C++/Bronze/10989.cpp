#include <iostream>
#include <vector>

int main() {
		std::vector<int> num;
		int N, k, max = 0;

		std::cin >> N;

		for(int i = 0; i < N; i++) {
				std::cin >> k;
				num.push_back(k);
				
				if(max < k)
						max = k;
		}
		
		int *cnt = new int[max + 1];
		int *ans = new int[N];


		for(int i = 0; i < max + 1; i++) {
				cnt[i] = 0;
		}

		for(int i = 0; i < N; i++) 
				cnt[num[i] - 1]++;
			
		for(int i = 1; i < max + 1; i++)
				cnt[i] = cnt[i - 1] + cnt[i];

		for(int i = N - 1; i >= 0; i--) {
				ans[cnt[num[i] - 1]] = num[i];
				cnt[num[i] - 1] -= 1;
		}


		for(int i = 0; i < N; i++)
				std::cout << ans[i] << "\n";
	
		delete[] cnt;
		delete[] ans;

		return 0;
		
}
