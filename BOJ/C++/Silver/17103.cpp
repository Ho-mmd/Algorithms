#include <iostream>

void primeSieve(bool *arr, int size) {

    for(int i = 0; i < size; i++) {
        arr[i] = true;
    }

    arr[0] = false;
    arr[1] = false;

    for(int i = 2; i * i < size; i++) {
        if(arr[i])
            for(int j = i * i; j < size; j += i)
                arr[j] = false;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, num, cnt;
    bool *arr = new bool[1000001];

    primeSieve(arr, 1000001);

    std::cin >> n;

    for(int i = 0; i < n; i++) {
        std::cin >> num;
        cnt = 0;
        
        for(int i = 2; i < num / 2 + 1; i++) {
            if(arr[i] && arr[num - i])
                cnt++;
        }

        std::cout << cnt << "\n";
    }

    delete[] arr;

    return 0;
}