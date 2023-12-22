#https://www.acmicpc.net/problem/1946
#idea: 서류 점수 오름차순 정렬 후 면접 점수가 앞 단계보다 높으면 합격!

m = eval(input());

for j in range(m):
    n = eval(input());
    tot = [];
    cnt = 1;

    for i in range(n):
        a, b = map(int, input().split());
        tot.append((a, b));

    tot = sorted(tot, key = lambda x : x[0]);
    min = tot[0][1];

    for i in range(1, n):
        if tot[i][1] < min:
            min = tot[i][1];
            cnt += 1;

    print(cnt);