#https://www.acmicpc.net/problem/15649
#idea: BackTracking -> 해를 찾는 도중 해가 아니어서 막히면, 되돌아가서 다시 해를 찾아가는 기법 ~ DFS!!!

n, m = map(int, input().split());

a = [];

def backtrack(num):
    if num == m :
        for j in range(m):
            print(a[j], end = " ");
            if j == (m - 1):
                print();
        return;
        
    for i in range(1, n + 1):
        if i not in a:
            a.append(i);
            backtrack(len(a));
            a.pop();

backtrack(0);