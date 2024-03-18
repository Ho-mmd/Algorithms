#include <set>
#include <iostream>

int main() {
		int N, M, cnt = 0;
		std::string word;
		std::set<std::string> words;

		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		std::cin >> N >> M;

		for(int i = 0; i < N; i++) {
				std::cin >> word;
				words.insert(word);
		}

		for(int i = 0; i < M; i++) {
				std::cin >> word;
				if(words.count(word) == 1)
						cnt++;
		}

		std::cout << cnt;

		return 0;
}
