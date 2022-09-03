#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	
}

//https://www.acmicpc.net/problem/1003
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
void BOJ1003() {
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

//https://www.acmicpc.net/problem/1002
#include <math.h>
void BOJ1002() {
	int n;
	double len, r;
	int x1, y1, r1, x2, y2, r2;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d%d%d%d%d%d", &x1, &y1, &r1, &x2, &y2, &r2);

		len = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
		r = r1 + r2;

		if (x1 == x2 && y1 == y2) {
			if (r1 == r2)
				printf("-1\n");
			else
				printf("0\n");
		}
		else if (len == r)
			printf("1\n");
		else if (len > r)
			printf("0\n");
		else {
			if (len == abs(r1 - r2))
				printf("1\n");
			else if (len > abs(r1 - r2))
				printf("2\n");
			else
				printf("0\n");
		}

	}

	return 0;
}

//https://www.acmicpc.net/problem/1004
#include <math.h>
int InOutPlanet(int x1, int y1, int x2, int y2, int x, int y, int r) {
	if (pow(x - x1, 2) + pow(y - y1, 2) < pow(r, 2) && pow(x - x2, 2) + pow(y - y2, 2) < pow(r, 2))
		return 0;
	else if (pow(x - x1, 2) + pow(y - y1, 2) < pow(r, 2) || pow(x - x2, 2) + pow(y - y2, 2) < pow(r, 2))
		return 1;
	else
		return 0;
}
void BOJ1004() {
	int n1, n2, x1, y1, x2, y2;
	int x, y, r;
	int cnt;

	scanf("%d", &n1);

	while (n1--) {
		cnt = 0;
		scanf("%d%d%d%d%d", &x1, &y1, &x2, &y2, &n2);
		for (int i = 0; i < n2; i++) {
			scanf("%d%d%d", &x, &y, &r);
			cnt += InOutPlanet(x1, y1, x2, y2, x, y, r);
		}
		printf("%d\n", cnt);
	}

	return 0;
}

