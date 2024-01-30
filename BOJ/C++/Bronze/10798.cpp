#include <iostream>
#include <string>

int main() {
		std::string toy1, toy2, toy3, toy4, toy5;

		std::cin >> toy1 >> toy2 >> toy3 >> toy4 >> toy5;

		for(int i = 0; i < 15; i++) {
				if(toy1.size() > i)
						std::cout << toy1[i];

				if(toy2.size() > i)
						std::cout << toy2[i];
				
				if(toy3.size() > i)
						std::cout << toy3[i];

				if(toy4.size() > i)
						std::cout << toy4[i];

				if(toy5.size() > i)
						std::cout << toy5[i];
		}	
	
		return 0;
}
