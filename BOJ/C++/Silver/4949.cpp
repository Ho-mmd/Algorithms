#include <iostream>
#include <stack>
#include <string>

int main() {
		std::ios_base::sync_with_stdio(false);

		std::string sen;
		std::stack<char> bra;
		int i;

		while(1) {
				std::getline(std::cin, sen);
				
				if(sen == ".")
						break;

				for(i = 0; i < sen.size(); i++) {
						if(sen[i] == '(' || sen[i] == '[')
								bra.push(sen[i]);
						else if(sen[i] == ')') {
								if(bra.size() > 0 && bra.top() == '(')
										bra.pop();
								else 
										break;
						}
						else if(sen[i] == ']') {
								if(bra.size() > 0 && bra.top() == '[')
										bra.pop();
								else
										break;
						}
				}
				
				if(bra.size() == 0 && i == sen.size())
						std::cout << "yes" << "\n";
				else
						std::cout << "no" << "\n";

				bra = std::stack<char>();
		}

		return 0;
}
