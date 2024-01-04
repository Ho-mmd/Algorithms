#https://www.acmicpc.net/problem/16953

a, b = map(int, input().split());
cnt = 1;

while (1):
    if b % 10 == 1:
        b //= 10;
    elif b % 2 == 0:
        b //= 2;
    else:
        print(-1);
        break;

    cnt += 1;

    if a == b:
        print(cnt);
        break;
    elif b < 2:
        print(-1);
        break;

    
