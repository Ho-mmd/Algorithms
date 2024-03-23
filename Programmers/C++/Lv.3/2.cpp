// H-Index
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    int tmp;
    
    sort(citations.begin(), citations.end());
    
    for(int i = 0; i <= citations[citations.size() - 1]; i++) {
        for(int j = 0; j < citations.size(); j++) {
            if(citations[j] >= i && i <= citations.size() - j)
                answer = i;
        }
    }
    
    return answer;
}
