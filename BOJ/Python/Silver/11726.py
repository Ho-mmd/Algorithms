#https://www.acmicpc.net/problem/11726

n = int(input());
a = [0] * (1001);

a[1], a[2] = 1, 2;

for i in range(3, n + 1):
    a[i] = a[i - 1] + a[i - 2];

print(a[n] % 10007);


