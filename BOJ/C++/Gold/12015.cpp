#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> v;
std::vector<int> srt;
int A; 

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);
		
		std::cin >> A;

		int tmp;

		for(int i = 0;  i < A; i++) {
				std::cin >> tmp;
				v.push_back(tmp);
		}

		srt.push_back(v[0]);

		for(int i = 1; i < A; i++) {
				if(srt.back() < v[i])
						srt.push_back(v[i]);
				else {
						auto it = lower_bound(srt.begin(), srt.end(), v[i]);
						srt[it - srt.begin()] = v[i]; 
				}
		}

		std::cout << srt.size();

		return 0;
}
