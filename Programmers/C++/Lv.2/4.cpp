// 타겟 넘버
#include <string>
#include <vector>

using namespace std;

int answer = 0;

void dfs(int n, int sum, int target, vector<int> chk, vector<int> numbers) {
    if(n == numbers.size()) {
        if(sum == target)
            answer++;
        return;
    }
       
    
    chk[n] = 1;
    
    dfs(n + 1, sum + numbers[n], target, chk, numbers);
    dfs(n + 1, sum - numbers[n], target, chk, numbers);
}

int solution(vector<int> numbers, int target) {
    //int answer = 0;
    vector<int> chk;
    
    for(int i = 0; i < numbers.size(); i++)
        chk.push_back(0);
    
    dfs(0, 0, target, chk, numbers);
    
    return answer;
}
