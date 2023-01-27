#https://www.acmicpc.net/problem/9095

n = int(input());
a = [0] * 11;

a[1], a[2], a[3] = 1, 2, 4;

for i in range(n):
    b = int(input());
    for j in range(1, b + 1):
        if a[j] == 0:
            a[j] = a[j - 1] + a[j - 2] + a[j - 3];
    print(a[b]);