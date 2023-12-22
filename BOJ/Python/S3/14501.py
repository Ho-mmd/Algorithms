#https://www.acmicpc.net/problem/14501
#idea: dp -> 쉽지 않다...

n = int(input());
b = [0] * 100;
sum = 0;

for i in range(n):
    x, y = map(int, input().split());
    if b[i] > b[i + 1]:
        b[i + 1] = b[i];
    if b[i + x] < b[i] + y:
        b[i + x] = b[i] + y;

print(b[n]);