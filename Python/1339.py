# https://www.acmicpc.net/problem/1339
# 알파벳과 값을 연결하려고 생각하지 않기... (숫자만 고려하기!!)

a = int(input());
b = [];
d = [0] * 26;
sum, n = 0, 9;

for i in range(a):
    x = input();
    b.append(x);

for i in range(a):
    for j in range(len(b[i])):
        d[ord(b[i][j]) - ord('A')] += 10 ** (len(b[i]) - j - 1);

d.sort(reverse = True);

for i in range(26):
    if d[i] != 0:
        sum += d[i] * n;
    n -= 1;

print(sum);