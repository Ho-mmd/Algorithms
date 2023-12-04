#include <iostream>

int main() {
    int max = 0, maxseq = 1, num = 0;

    for(int i = 0; i < 9; i++) {
        std::cin >> num;

        if(num > max) {
            max = num;
            maxseq = i + 1;
        }
    }

    std::cout << max << "\n" << maxseq;

    return 0;
}