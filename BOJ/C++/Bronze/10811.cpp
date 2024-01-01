#include <iostream>
#include <vector>
#include <algorithm>

/*** vector
 * Same as dynamic arrays with the ability to resize itself automatically 
 * when an element is inserted or deleted, with their storage being handled 
 * automatically by the container
***/

int main() {
    int N, M, i, j, seq;

    std::vector<int> tmp;
    std::vector<int> ans;
    std::vector<int>::iterator ptr; 

    std::cin >> N >> M;

    for(int k = 1; k <= N; k++)
        tmp.push_back(k);

    ans = tmp;

    for(int k = 0; k < M; k++) {
        std::cin >> i >> j;
        seq = i;
        for(int l = j; l - i >= 0; l--) {
            ans[seq - 1] = tmp[l - 1]; 
            seq++; 
        }
        tmp = ans;
    }

    for(int k = 0; k < N; k++)
        std::cout << ans[k] << " ";

    return 0;
}