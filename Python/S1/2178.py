#https://www.acmicpc.net/problem/2178

n, m = map(int, input().split());
a = [[] for i in range(n)];
visited = [[0 for i in range(m)] for j in range(n)];
q = [];
cnt = 0;

for i in range(n):
    tmp = int(input());
    for j in range(m):
        a[i].insert(0, tmp % 10);
        tmp //= 10;

def bfs(arr, visit, x, y, cnt):
    visit[x][y] = 1;
    q.append([x, y, 1]);
    while q:
        x, y, cnt = q.pop(0);
        if x == n - 1 and y == m - 1:
            print(cnt);
            break;
        else:
            if x - 1 >= 0 and arr[x - 1][y] == 1 and visit[x - 1][y] == 0:
                visit[x - 1][y] = 1;
                q.append([x - 1, y, cnt + 1]);
            if x + 1 < n and arr[x + 1][y] == 1 and visit[x + 1][y] == 0:
                visit[x + 1][y] = 1;
                q.append([x + 1, y, cnt + 1]);
            if y - 1 >= 0 and arr[x][y - 1] == 1 and visit[x][y - 1] == 0:
                visit[x][y - 1] = 1;
                q.append([x, y - 1, cnt + 1]);
            if y + 1 < m and arr[x][y + 1] == 1 and visit[x][y + 1] == 0:
                visit[x][y + 1] = 1;
                q.append([x, y + 1, cnt + 1]);
    
bfs(a, visited, 0, 0 ,0);