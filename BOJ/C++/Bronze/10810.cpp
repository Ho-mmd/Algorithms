#include <iostream>

int main () {
    int N, M;
    int st, end, num;

    std::cin >> N >> M;

    int* arr = new int [N + 1]();

    for(int i = 0; i < M; i++) {
        std::cin >> st >> end >> num;

        for(int j = st; j <= end; j++) {
            arr[j] = num;
        }
    }

    for(int i = 1; i <= N; i++) {
        std::cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}