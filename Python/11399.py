#https://www.acmicpc.net/problem/11399

a = eval(input());

wait = list(map(int, input().split()));
sum = 0;

wait.sort();

for i in range(a):
    sum += wait[i] * (a - i);

print(sum);

