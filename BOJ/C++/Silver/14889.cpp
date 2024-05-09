#include <iostream>
#include <vector>
#include <set>
#include <climits>

int N;
int min = INT_MAX;
std::vector<std::vector<int>> v;
std::set<int> team;
std::set<int> teamElse;

std::set<int>::iterator it;

void diff(int cnt) {
		if(N / 2 == team.size()) {
				int tmp1 = 0, tmp2 = 0;
				for(int i = 0; i < N; i++) {
						it = team.find(i);
						if(it == team.end())
								teamElse.insert(i);
				}
				
				for(it = team.begin(); it != team.end(); it++) {
						for(auto i = team.begin(); i != team.end(); i++)
								tmp1 += v[*it][*i];
				}
				
				for(it = teamElse.begin(); it != teamElse.end(); it++) {
						for(auto i = teamElse.begin(); i != teamElse.end(); i++)
								tmp2 += v[*it][*i];
				}	

				if(abs(tmp1 - tmp2) < min)
						min = abs(tmp1 - tmp2);

				teamElse.clear();

				return ;
		} else {
				for(int i = cnt; i < N; i++) {
						team.insert(i);
						diff(i + 1);
						team.erase(i);
				}
		}
}

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int tp;
		std::vector<int> tmp;
		
		std::cin >> N;

		for(int i = 0; i < N; i++) {
				for(int j = 0; j < N; j++) {
						std::cin >> tp;
						tmp.push_back(tp);
				}

				v.push_back(tmp);
				tmp.clear();
		}
		
		diff(0);

		std::cout << min;
		
		return 0;
}
