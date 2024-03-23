#include<vector>
#include<queue>
using namespace std;

int solution(vector<vector<int>> maps)
{
    int answer = 0;
    int x, y;
    queue<pair<int, int>> que;
    int n = maps.size();
    int m = maps[0].size();
    int dist[101][101] = { 0 }; 
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    
    que.push(make_pair(0, 0));
    dist[0][0] = 1;
    
    while(que.size() > 0) {
        x = que.front().first;
        y = que.front().second;
        que.pop();
        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(nx >= 0 && nx < n && ny >= 0 && ny < m && dist[nx][ny] == 0 && maps[nx][ny] == 1) {
                que.push(make_pair(nx, ny));
                dist[nx][ny] = dist[x][y] + 1;
            }
        }
    }
    
    if(dist[n - 1][m - 1] == 0){
        answer = -1;
    } else {
        answer = dist[n - 1][m - 1];
    }
    
    return answer;
}
