#https://www.acmicpc.net/problem/1260

n, m, v = map(int, input().split());

a = [[] for i in range(n + 1)]; 

visdfs = [0] * (n + 1);
visbfs = [0] * (n + 1);

queue = [];

for i in range(m):
    x, y = map(int, input().split());
    a[x].append(y);
    a[y].append(x);

for i in range(n + 1):
    a[i].sort();

def dfs(arr, visit, v):
    visit[v] = 1;
    print(v, end = " ");
    for i in arr[v]:
        if visit[i] == 0:
            dfs(arr, visit, i);

def bfs(queue, arr, visit, v):
    visit[v] = 1;
    queue.append(v);
    print(v, end = " ");
    while queue:
        tmp = queue.pop(0);
        for i in arr[tmp]:
            if visit[i] == 0:
                queue.append(i);
                visit[i] = 1;
                print(i, end = " ");

dfs(a, visdfs, v);
print();
bfs(queue, a, visbfs, v);