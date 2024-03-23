// 할인 행사
#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    map<string, int> need;
    map<string, int> tmp;
    map<string, int>::iterator iter;
    
    for(int i = 0; i < want.size(); i++)
        need.insert(make_pair(want[i], number[i]));
    
    for(int i = 0; i <= discount.size() - 10; i++) {
        tmp = need;

        for(int j = i; j < i + 10; j++) {
            if(tmp.count(discount[j]) > 0)
                tmp[discount[j]]--;
        }
              
        for(iter = tmp.begin(); iter != tmp.end(); iter++) {
            if(iter->second != 0)
                break;
        }
        
        if(iter == tmp.end())
            answer++;
    }
    
    return answer;
}
