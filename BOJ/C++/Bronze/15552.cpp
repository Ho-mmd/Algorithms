#include <iostream>

int main() {
    int T, A, B;    
    std::cin.tie(NULL);

    std::cin >> T;

    for(int i = 0; i < T; i++) {
        std::cin >> A >> B;
        std::cout << A + B << "\n";
    }

    return 0;
}