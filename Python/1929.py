#https://www.acmicpc.net/problem/1929
# idea: 에라토스테네스의 체!

m, n = map(int, input().split());
a = [0] * (n + 1);

a[1] = 1;

for i in range(2, n + 1):
    b = 2;
    while(1):
        if i * b > n:
            break;
        a[i * b] = 1;
        b += 1;

for i in range(m, n + 1):
    if a[i] == 0:
        print(i);