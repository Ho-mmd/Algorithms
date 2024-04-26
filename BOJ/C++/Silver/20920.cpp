#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>

bool cmp(std::pair<std::string, int> a, std::pair<std::string, int> b) {
		if(a.second != b.second)
				return a.second > b.second;
		else if(a.first.size() != b.first.size())
				return a.first.size() > b.first.size();
		else
				return a.first < b.first;
}

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		std::map<std::string, int> mp;
		std::string word;
		std::vector<std::pair<std::string, int>> words;

		int N, M;

		std::cin >> N >> M;

		for(int i = 0; i < N; i++) {
				std::cin >> word;

				if(word.size() < M)
						continue;
				else {
						auto tmp = mp.find(word);

						if(tmp != mp.end())
								tmp->second++;
						else
								mp.insert(std::make_pair(word, 1));
				}
		}

		for(auto it = mp.begin(); it != mp.end(); it++)
				words.push_back(std::make_pair(it->first, it->second));

		sort(words.begin(), words.end(), cmp);

		for(auto it = words.begin(); it != words.end(); it++)
				std::cout << it->first << "\n";

		return 0;
}
