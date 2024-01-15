#include <iostream>
#include <string>

int main() {
    int N, tot = 0;
    std::string num;

    std::cin >> N >> num;

    for(int i = 0; i < N; i++)
        tot += (int)num[i] - '0';

    std::cout << tot;

    return 0;
}