#include <iostream>
#include <deque>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N, M, tmp, rot;
    std::deque<int> deq;
    std::vector<int> A;
    std::vector<int> C;

    std::cin >> N;

    for(int i = 0; i < N; i++) {
        std::cin >> tmp;
        A.push_back(tmp);
    }
    
    for(int i = 0; i < N; i++) {
        std::cin >> tmp;
        
        if(A[i] == 0)
            deq.push_back(tmp);
    }   
 
    std::cin >> M;

    for(int i = 0; i < M; i++) {
        std::cin >> tmp;
        
        if(deq.empty())
            std::cout << tmp << " ";
        else {
            std::cout << deq.back() << " ";
            deq.pop_back();            
            deq.push_front(tmp);
        }
    }

    return 0;
}