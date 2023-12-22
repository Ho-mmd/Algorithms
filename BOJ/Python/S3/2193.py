#https://www.acmicpc.net/problem/2193

n = int(input());
a =[0] * 91;

a[1] = 1;
a[2] = 1;

for i in range(3, n + 1):
    a[i] = a[i - 1] + a[i - 2];

print(a[n]);