#include <iostream>
#include <string>

int main() {
    std::string sentence;
    int ans = 0;

    // Get data until before 'enter' inputs
    std::getline(std::cin, sentence, '\n');
    sentence.push_back(' ');

    for (int i = 0; i < sentence.size() - 1; i++) { 
        if(sentence[i] != ' ' && sentence[i + 1] == ' ')
            ans += 1;
    }

    std::cout << ans;

    return 0;
}