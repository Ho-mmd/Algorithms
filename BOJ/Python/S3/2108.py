#https://www.acmicpc.net/problem/2108
#반올림 규칙 주의! round() -> 사사오입인데 0.5차이면 짝수로 감 ex) 1.5 -> 2, 2.5 -> 2, 3.5 -> 4!!!

n = int(input());
a = [];
b = [];
sum = 0;
cnt = [0] * 8001;

for i in range(n):
    a.append(int(input()));
    sum += a[i];
    cnt[a[i] + 4000] += 1;

a.sort();
key = max(cnt);

for i in range(len(cnt)):
    if key == cnt[i]:
        b.append(i - 4000);

if len(b) <= 1:
    key = b[0];
else:
    key = b[1];

avg = sum / n;

if avg > 0:
    if avg - int(avg) >= 0.5:
        avg = int(avg) + 1;
    else:
        avg = int(avg);
else:
    if int(avg) - 1 - avg <= -0.5:
        avg = int(avg);
    else:
        avg = int(avg) - 1;

print(avg);
print(a[n // 2]);
print(key);
print(max(a) - min(a));