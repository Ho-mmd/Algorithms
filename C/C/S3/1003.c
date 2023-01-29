//https://www.acmicpc.net/problem/1003
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int memo[40] = { 0, 1 };
int fibo(int n) {
	if (n < 2)
		return memo[n];

	if (memo[n] != 0)
		return memo[n];
	else {
		memo[n] = fibo(n - 1) + fibo(n - 2);
		return memo[n];
	}
}

int main(void)
{
	int a, b;

	scanf("%d", &a);

	for (int i = 0; i < a; i++) {
		scanf("%d", &b);

		if (b == 0)
			printf("%d %d\n", 1, 0);
		else if (b == 1)
			printf("%d %d\n", 0, 1);
		else
			printf("%d %d\n", fibo(b - 1), fibo(b));
	}

	return 0;
}