#include <iostream>
#include <vector>
#include <climits>

int min = INT_MAX;
int max = INT_MIN;
int N;

void maxMin(std::vector<int> num, std::vector<int> &cal, int mid, int cnt) {
		if(N - 1 == cnt) {
				if(mid > max)
						max = mid;
				if(mid < min)
						min = mid;
				return ;
		}
		else {
				if(cal[0] > 0) {
						cal[0]--;
						maxMin(num, cal, mid + num[cnt + 1], cnt + 1);
						cal[0]++;
				}
				if(cal[1] > 0) {
						cal[1]--;
						maxMin(num, cal, mid - num[cnt + 1], cnt + 1);
						cal[1]++;
				}
				if(cal[2] > 0) {
						cal[2]--;
						maxMin(num, cal, mid * num[cnt + 1], cnt + 1);
						cal[2]++;
				}
				if(cal[3] > 0){
						cal[3]--;
						maxMin(num, cal, mid / num[cnt + 1], cnt + 1);
						cal[3]++;
				}
		}
}

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int tmp;
		std::vector<int> num;
		std::vector<int> cal; 

		std::cin >> N;
		
		for(int i = 0; i < N; i++) {
				std::cin >> tmp;
				num.push_back(tmp);
		}

		for(int i = 0; i < 4; i++) {
				std::cin >> tmp;
				
				cal.push_back(tmp);
		}
	
		maxMin(num, cal, num[0], 0);

		std::cout << max << "\n" << min;

		return 0;
}
