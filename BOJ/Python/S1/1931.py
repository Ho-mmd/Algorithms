#https://www.acmicpc.net/problem/1931
#sorted 내 lambda 사용 시 !key!
#idea: 종료 시점을 기준으로 시작 시점까지 고려......

a = eval(input());
cnt = [];

for i in range(a):
    t = input().split();
    cnt.append((int(t[0]), int(t[1])));

cnt = sorted(cnt, key = lambda x: x[0]);
cnt = sorted(cnt, key = lambda x: x[1]);

e = 0;
f = 0;

for i in range(a):
  if cnt[i][0] >= e: 
    f += 1;
    e = cnt[i][1];

print(f);