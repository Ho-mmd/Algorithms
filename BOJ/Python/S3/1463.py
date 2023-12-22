# https://www.acmicpc.net/problem/1463

a = int(input());
cnt = [0] * 1000001;
tmp1, tmp2 = 0, 0;

cnt[2] = 1;
cnt[3] = 1;

for i in range(4, a + 1):    
    if i % 2 == 0 and i % 3 == 0:
        if cnt[i // 2] + 1 <= cnt[i // 3] + 1 and cnt[i // 2] + 1 <= cnt[i - 1] + 1:
            cnt[i] = cnt[i // 2] + 1;
        elif cnt[i // 3] + 1 < cnt[i // 2] + 1 and cnt[i // 3] + 1 < cnt[i - 1] + 1:
            cnt[i] = cnt[i // 3] + 1;
        else:
            cnt[i] = cnt[i - 1] + 1;
    elif i % 2 == 0:
        if cnt[i // 2] + 1 < cnt[i - 1] + 1:
            cnt[i] = cnt[i // 2] + 1;
        else:
            cnt[i] = cnt[i - 1] + 1;
    elif i % 3 == 0:
        if cnt[i // 3] + 1 < cnt[i - 1] + 1:
            cnt[i] = cnt[i // 3] + 1;
        else:
            cnt[i] = cnt[i - 1] + 1;
    else:
        cnt[i] = cnt[i - 1] + 1;

print(cnt[a]);