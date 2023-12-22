#https://www.acmicpc.net/problem/2606

a = int(input());
b = int(input());
c = [[] for i in range(a + 1)];
visited = [0] * (a + 1);
cnt, tmp = 0, 0;

for i in range(b):
    x, y = map(int, input().split());
    c[x].append(y);
    c[y].append(x);

def q(arr, visited, n):
    tmp = arr[n].pop();
    visited[tmp] = 1;
    for i in range(len(c[tmp])):
        if len(c[tmp]) == 0:
            break;
        q(arr, visited, tmp);

q(c, visited, 1);

for i in range(2, a + 1):
    if visited[i] != 0:
        cnt += 1;

print(cnt);