#include <iostream>

int main() {
    int N, M, num;

    std::cin >> N >> M;

    // 2 dimensional array dynamic allocation start
    int** arr1 = new int*[M];
    int** arr2 = new int*[M];

    for(int i = 0; i < M; i++) {
        arr1[i] = new int[N];
        arr2[i] = new int[N];
    }
    // 2 dimensional array dynamic allocation end

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            std::cin >> arr1[i][j]; 
        }
    }

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            std::cin >> arr2[i][j]; 
        }
    }

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            if(j == N - 1)
                std::cout << arr1[i][j] + arr2[i][j];
            else
                std::cout << arr1[i][j] + arr2[i][j] << " "; 
        }
        std::cout << "\n";
    }
    
    // Free 2 dimensional array dynamic allocation start
    for(int i = 0; i < M; i++) {
        delete[] arr1[i];
        delete[] arr2[i];
    }

    delete[] arr1;
    delete[] arr2;
    // Free 2 dimensional array dynamic allocation end

    return 0;
}