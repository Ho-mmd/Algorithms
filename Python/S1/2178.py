#https://www.acmicpc.net/problem/2178

n, m = map(int, input().split());
a = [[] for i in range(n)];
q = [];
cnt = 0;

for i in range(n):
    tmp = int(input());
    for j in range(m):
        a[i].insert(0, tmp % 10);
        tmp //= 10;

def count(a, i, j, cnt):
    cnt += 1;
    if (i == n - 1) and (j == m - 1):
        print(cnt);
        return;

    if j + 1 < m and a[i][j + 1] == 1:
        q.append(i);
        q.append(j);
        a[i][j + 1] = 2;
        j += 1;
        count(a, i, j, cnt);
    elif i + 1 < n and a[i + 1][j] == 1:
        q.append(i);
        q.append(j);
        a[i + 1][j] = 2;
        i += 1;
        count(a, i, j, cnt);
    elif j - 1 >= 0 and a[i][j - 1] == 1:
        q.append(i);
        q.append(j);
        a[i][j - 1] = 2;
        j -= 1;
        count(a, i, j, cnt);
    elif i - 1 >= 0 and a[i - 1][j] == 1:
        q.append(i);
        q.append(j);
        a[i - 1][j] = 2;
        i -= 1;
        count(a, i, j, cnt);
    else:
        cnt -= 2;
        j = q.pop();
        i = q.pop();
        count(a, i, j, cnt);


count(a, 0, 0, cnt);

for i in range(n):
    print(a[i]);