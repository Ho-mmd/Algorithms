#https://www.acmicpc.net/problem/2579
# Get simple -> DP!!!

n = int(input());
a = [0] * 301;
v = [0] * 301;

for i in range(n):
    a[i] = int(input());

v[0] = a[0];
v[1] = a[0] + a[1];

if a[0] > a[1]:
    v[2] = a[0] + a[2];
else:
    v[2] = a[1] + a[2];

for i in range(3, n):
    if v[i - 2]  > v[i - 3] + a[i - 1]:
        v[i] = v[i - 2] + a[i];
    else:
        v[i] = v[i - 3] + a[i - 1] + a[i];

print(v[n - 1]);