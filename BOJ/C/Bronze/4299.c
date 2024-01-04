//https://www.acmicpc.net/problem/4299
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b;
	int t1 = 0, t2 = 0;
	scanf("%d %d", &a, &b);
	t1 = (a + b) / 2;
	t2 = a - t1;
	if (t1 < 0 || t2 < 0 || ((a + b) % 2 != 0))
		printf("-1");
	else if (t1 > t2)
		printf("%d %d", t1, t2);
	else
		printf("%d %d", t2, t1);
	return 0;
}