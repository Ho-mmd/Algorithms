#include <set>
#include <iostream>
#include <string>

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		std::string word;
		std::string tmp = "";
		std::set<std::string> st;
		
		std::cin >> word;

		for(int i = 0; i < word.size(); i++) {
				tmp = "";
				for(int j = i; j < word.size(); j++) {
						tmp += word[j];
						st.insert(tmp);
				}
		}

		std::cout << st.size();

		return 0;
}
