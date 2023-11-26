#include <iostream>
#include <map>

int main() {
    int         N, M, num;

    std::cin    >>          N;
    
    std::map<int, int>m1;
    // std::map<int, int>m2;
    std::map<int, int>::iterator it;
    
    for(int i = 0; i < N; i++) {
                std::cin    >>          num;
                m1.insert({num, 0});
    }

    std::cin    >>          M;

    for(int i = 0; i < M; i++) {
                std::cin    >>          num;
                it          =           m1.find(num);
                if(it != m1.end()) 
                            std::cout    <<     "1 "; 
                else 
                            std::cout    <<     "0 "; 
    }

    // for(it = m2.begin(); it != m2.end(); ++it) 
    //             std::cout << it->second << " ";

    std::cout << std::endl;

    return 0;
}