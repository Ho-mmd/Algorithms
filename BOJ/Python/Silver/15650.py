#https://www.acmicpc.net/problem/15650

n, m = map(int, input().split());
a = [0];

def dfs(num):
    if len(a) == m + 1:
        for j in range(1, m + 1):
            print(a[j], end = " ");
        print();
        return;

    for i in range(num, n + 1):
        if i not in a and i > a[len(a) - 1]:
            a.append(i);
            dfs(num + 1);
            a.pop();

    return;

dfs(1);