//https://www.acmicpc.net/problem/1002
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(void)
{
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