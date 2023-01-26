# https://www.acmicpc.net/problem/1449

a, b = map(int, input().split());
c = [];
i = a - 1;
cnt, tmp = 0, 0;

c = list(map(int, input().split()));

c.sort();

if b == 1:
    print(a);
else:
    while (1):
        tmp = c[i];
        while(1):
            i -= 1;
            if i < 0:
                cnt += 1;
                break;
            if tmp - c[i] + 1 == b:
                cnt += 1;
                i -= 1;
                break;
            elif tmp - c[i] + 1 > b:
                cnt += 1;
                break;
        if i < 0:
            break;
    print(cnt);