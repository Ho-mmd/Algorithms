#include <iostream>
#include <string>

int main() {
    std::string word;

    std::cin >> word;

    for(int i = 0; i < word.size() / 2; i++) {
        if(word[i] != word[word.size() - 1 - i]) {
            std::cout << "0";
            return 0;
        }   
    }

    std::cout << "1";

    return 0;
}