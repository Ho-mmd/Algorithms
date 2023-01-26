#https://www.acmicpc.net/problem/8437

a = int(input());
b = int(input());
n, m = 0, 0;

n = a - a // 2;
m = a // 2;
n += b // 2;
m -= b // 2;

print(n);
print(m);
