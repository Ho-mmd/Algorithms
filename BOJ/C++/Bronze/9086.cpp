#include <iostream>
#include <string>

int main() {
    int T;
    std::string string;

    std::cin >> T;

    for(int i = 0; i < T; i++) {
        std::cin >> string;
        std::cout << string[0] << string[string.size() - 1] << "\n";
    } 

    return 0;
}