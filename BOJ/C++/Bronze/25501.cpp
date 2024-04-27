#include <iostream>
#include <string>

int recur(std::string words, int l, int r, int &cnt) {
		cnt++;

		if(l >= r)
				return 1;
		else if(words[l] != words[r])
				return 0;
		else
				return recur(words, l + 1, r - 1, cnt);
}

int isPalin(std::string words, int &cnt) {
		return recur(words, 0, words.size() - 1, cnt);
}

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		std::string words;
		int n, ans;
		int cnt;

		std::cin >> n;

		for(int i = 0; i < n; i++) {
				cnt = 0;
				std::cin >> words;
				
				ans = isPalin(words, cnt);

				std::cout << ans << " " << cnt << "\n";
		}

		return 0;
}
