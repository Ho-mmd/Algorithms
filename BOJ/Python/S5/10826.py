#https://www.acmicpc.net/problem/10826
#idea: Memoziation

#import sys
#sys.setrecursionlimit (10001) //재귀함수 제한 횟수 설정

import sys
sys.setrecursionlimit (10001)

def fibo(arr, n):
    if n == 0:
        return 0;
    elif n <= 2:
        return 1;
    elif arr[n] != 0:
        return arr[n];
    else:
        arr[n] = fibo(arr, n - 1) + fibo(arr, n - 2);
        return arr[n]

n = int(input());
a = [0] * 10001;

a[1], a[2] = 1, 1

print(fibo(a, n));