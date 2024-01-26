#include <iostream>
#include <string>
#include <array>

int main() {
    std::string word;
    int cnt[26] = { 0 };
    int max = 0;
    int max_cnt = 0;
    int max_loc;

    std::cin >> word;

    for(int i = 0; i < word.size(); i++) {
        cnt[toupper(word[i]) - 'A'] += 1;
    }

    for(int i = 0; i < 26; i++) {
        if(cnt[i] > max) {
            max = cnt[i];
            max_cnt = 0;
            max_loc = i;
        } else if(cnt[i] == max) {
            max_cnt += 1;   
        }   
    }

    if(max_cnt == 0)
        std::cout << (char)(max_loc + 'A');
    else 
        std::cout << "?";

    return 0;
}