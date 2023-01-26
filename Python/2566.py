#https://www.acmicpc.net/problem/2566

max = 0;
x, y = 0, 0;

for i in range(9):
    a = list(map(int, input().split()));
    for j in range(9):
        if a[j] > max:
            max = a[j];
            x = i + 1;
            y = j + 1;
        
print(max);
print(x, y);
