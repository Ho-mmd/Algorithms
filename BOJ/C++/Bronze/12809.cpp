#include <iostream>
#include <string>

int main() {
    std::string S;
    int arr[26];

    std::cin >> S;

    for(int i = 0; i < 26; i++)
        arr[i] = -1;

    for(int i = 0; i <= S.size(); i++) {
        // ASCII : 'a' == 97
        if(arr[(int)S[i] - 97] < 0)
            arr[(int)S[i] - 97] = i;
        else 
            continue;
    }

    for(int i = 0; i < 26; i++)
        std::cout << arr[i] << " ";

    return 0;
}