#include <iostream>

/* 
* swap(_Tp& __a, _Tp& __b)
* Dynamic Allocation
    new
    delete
*/
int main() {
    int N, M, i, j;

    std::cin >> N >> M;

    int* arr = new int[N];

    for(int k = 0; k < N; k++)
        arr[k] = k + 1;

    for(int k = 0; k < M; k++) {
        std::cin >> i >> j;
        std::swap(arr[i - 1], arr[j - 1]);
    }

    for(int k = 0; k < N; k++)
        std::cout << arr[k] << " ";
    
    delete[] arr;

    return 0;
}