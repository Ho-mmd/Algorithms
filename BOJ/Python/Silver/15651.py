#https://www.acmicpc.net/problem/15651

n, m = map(int, input().split());
a = [];

def dfs(num):
    if len(a) == m:
        for j in a:
            print(j, end = " ");
        print();
        return;

    for i in range(1, n + 1):
        a.append(i);
        dfs(num + 1);
        a.pop();

    return;

dfs(1);