#https://www.acmicpc.net/problem/1874

n = int(input());
a= [];
ans = [];
j = 1;

for i in range(n):
    b = int(input());
    if b >= j:
        while(1):
            a.append(j);
            ans.append("+");
            j += 1;
            if j > b:
                break;
    while(1):
        if len(a) == 0:
            ans[0] = -1;
            break;
        num = a.pop();
        ans.append("-")
        if num == b:
            break;

if ans[0] == -1:
    print("NO");
else:
    for i in ans:
        print(i);