#include <iostream>
#include <string>

int main() {
    int n, R;
    std::string S;

    std::cin >> n;

    for(int i = 0; i < n; i++) {
        std::cin >> R >> S;
        for(int j = 0; j < S.size(); j++) {
            for(int k = 0; k < R; k++)
                std::cout << S[j];
        }
        std::cout << "\n";
    }

    return 0;
}