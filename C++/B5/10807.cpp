#include <iostream>

int main() {
    int N, v, cnt = 0;

    std::cin >> N;

    int* arr = new int [N];

    for(int i = 0; i < N; i++) {
        std::cin >> arr[i];
    }

    std::cin >> v;

    for(int i = 0; i < N; i++) {
        if(arr[i] == v)
            cnt += 1;
    }

    delete[] arr;

    std::cout << cnt;

    return 0;
}