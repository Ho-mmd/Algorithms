#https://www.acmicpc.net/problem/15652

n, m = map(int, input().split());
a = [];

def dfs(num):
    if len(a) == m:
        for i in range(1, m):
            if a[i] < a[i - 1]:
                return;
        for i in a:
            print(i, end = " ");
        print();
        return;

    for j in range(1, n + 1):
        a.append(j);
        dfs(num + 1);
        a.pop();
    
    return;

dfs(1);