#https://www.acmicpc.net/problem/1541
# (-)가 나온 후의 수는 모두 빼기 연산 진행
# (+) 기준으로 분리 후 (-)가 나올 때까지 더하다가 (-) 나오면 분리 후 연산 진행


a = list(input().split('+'));
sum = 0;
i = 0;
flag = 0;

while (1):
    if i < len(a):
        if '-' in a[i]:
            b = list(map(int, a[i].split('-')));
            for j in b:
                sum -= int(j);
            if flag == 0:
                sum += 2 * b[0];
                flag = 1;
        elif flag == 0:
            sum += int(a[i]);
        else:
            sum -= int(a[i]);
        i += 1;
    else:
        break;

print(sum);