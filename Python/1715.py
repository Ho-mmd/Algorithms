#https://www.acmicpc.net/problem/1715

import heapq

a = eval(input());
heap = [];
sum = 0;

for i in range(a):
    c = eval(input());
    heapq.heappush(heap, c);

while (1):
    if len(heap) == 1:
        print(0);
        break;
    
    m1 = heapq.heappop(heap);
    m2 = heapq.heappop(heap);

    d = m1 + m2;
    sum += d;

    if not heap:
        print(sum);
        break;

    heapq.heappush(heap, d);