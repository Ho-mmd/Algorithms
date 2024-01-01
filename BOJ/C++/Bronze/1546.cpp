#include <iostream>
#include <vector>

int main() {
    int N, M = 0, score;
    double tot = 0;

    std::vector<double> ans; 

    std::cin >> N;

    for(int i = 0; i < N; i++) {
        std::cin >> score;
        ans.push_back(score);
        
        if(ans[i] > M)
            M = ans[i];
    }

    for(int i = 0; i < N; i++) {
        ans[i] = ans[i] / M * 100;
    }

    for(int i = 0; i < N; i++) {
        tot += ans[i];
    }

    tot /= N;
    
    std::cout << tot;

    return 0;
}