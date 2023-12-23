#include <iostream>

int main () {
    int* arr = new int[31];
    int n;

    for(int i = 1; i <= 28; i++) {
        std::cin >> n;
        arr[n] = 1;
    }

    for(int i = 1; i <= 30; i++) {
        if(arr[i] != 1)
            std::cout << i << "\n";
    }

    delete[] arr;
        
    return 0;
}