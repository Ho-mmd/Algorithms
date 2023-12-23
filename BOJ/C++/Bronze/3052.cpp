#include <iostream>

int main() {
    int* arr = new int[42]();
    int A, remainder, cnt = 0;

    for(int i = 0; i < 10; i++) {
        std::cin >> A;
        remainder = A % 42;
        arr[remainder] += 1;
    }

    for(int i = 0; i < 42; i++) {
        if(arr[i] != 0)
            cnt += 1;
    }

    std::cout << cnt;

    delete[] arr;

    return 0;
}