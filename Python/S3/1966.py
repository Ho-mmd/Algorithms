#https://www.acmicpc.net/problem/1966
#idea: 더 빠른 방법이 있을 거 같았는데 simple is best......

def maxx(arr):
    top = 0;
    for i in arr:
        if i > top:
            top = i;

    return top;

t = int(input());

for i in range(t):
    n, m = map(int, input().split());
    a = list(map(int, input().split()));
    if n == 1:
        print("1");
    else:
        cnt = 0;
        while(1):
            if a[0] != maxx(a):
                tmp = a.pop(0);
                a.append(tmp);
                if m == 0:
                    m = n - 1;
                else:
                    m -= 1;
            else:
                if m == 0:
                    cnt += 1;
                    print(cnt);
                    break;
                else:
                    cnt += 1;
                    a.pop(0);
                    n -= 1;
                    m -= 1;