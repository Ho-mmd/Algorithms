#include <iostream>
#include <string>

int sum[26][200001] = {0, };

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		std::string S;
		int q, start, end, ans;
		char a;

		std::cin >> S >> q;

		for(int i = 0; i < S.size(); i++) {
				for(int j = 0; j < 26; j++) { 
						if(i == 0)
								sum[j][i] = 0;
						else
								sum[j][i] = sum[j][i - 1];
				}

				sum[S[i] - 'a'][i]++;
		}

		for(int i = 0; i < q; i++) {
				std::cin >> a >> start >> end;

				if(start == 0)
						std::cout << sum[a - 'a'][end] << "\n";
				else
						std::cout << sum[a - 'a'][end] - sum[a - 'a'][start - 1] << "\n";
		}

		return 0;
}
