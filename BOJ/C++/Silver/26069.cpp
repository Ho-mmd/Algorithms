#include <iostream>
#include <string>
#include <set>

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		int N, flag = 0;
		std::string name1, name2;
		std::set<std::string> st;

		std::cin >> N;

		for(int i = 0; i < N; i++) {
				std::cin >> name1 >> name2;
	
				if(name1 == "ChongChong" || name2 == "ChongChong") {
						st.insert(name1);
						st.insert(name2);
				}
				
				if(st.find(name1) != st.end() || st.find(name2) != st.end()) {
						st.insert(name1);
						st.insert(name2);
				}
		}

		std::cout << st.size();

		return 0;
}
