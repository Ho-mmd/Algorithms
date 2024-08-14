#include <iostream>
#include <vector>
#include <algorithm>

long long N, K;
long long ans = 0;
std::vector<int> v;

long long solve(long long start, long long end) {
		if(start > end)
				return ans;
		
		long long cnt = 0;
		long long mid = (start + end) / 2;

		for(int i = 0; i < K; i++)
				cnt += v[i] / mid;
		
		if(cnt >= N) {
				if(mid > ans)
						ans = mid;

				return solve(mid + 1, end);
		}
		else
				return solve(start, mid - 1);	
}

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		long long  max;
        int tmp;
    
		std::cin >> K >> N;

		for(int i = 0; i < K; i++) {
                std::cin >> tmp;
                v.push_back(tmp);
        } 
				
		max = *std::max_element(v.begin(), v.end());

		std::cout << solve(1, max);

		return 0;
}
