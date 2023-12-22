#https://www.acmicpc.net/problem/9461

t = int(input());

a = [0] * 101;
a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8] = 1, 1, 1, 2, 2, 3, 4, 5;

for j in range(t):
    n = int(input());
    for i in range(9, n + 1):
        if a[n] == 0:
            a[i] = a[i - 1] + a[i - 5];
        else:
            break;
    print(a[n]);