// 피로도 

#include <string>
#include <vector>

using namespace std;

int answer = -1;

void DFS(int k, int cnt, vector<vector<int>> dungeons, vector<int> chk) {
    if(answer < cnt)
        answer = cnt;
    
    for(int i = 0; i < dungeons.size(); i++) {
        if(chk[i] == 0 && k >= dungeons[i][0]) {
            cnt++;
            chk[i] = 1;
            DFS(k - dungeons[i][1], cnt, dungeons, chk);
            chk[i] = 0;
            cnt -= 1;
        }
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    int cnt = 0;
    vector<int> chk;
    
    for(int i = 0; i < dungeons.size(); i++) {
        chk.push_back(0);
    }
    
    DFS(k, cnt, dungeons, chk);
    
    return answer;
}
