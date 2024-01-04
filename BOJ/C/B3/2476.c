//https://www.acmicpc.net/problem/2476

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b, c, d, max = 0, tmp;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d%d%d", &b, &c, &d);
		if (b == c && c == d)
			tmp = 10000 + 1000 * b;
		else if (b == c)
			tmp = 1000 + 100 * b;
		else if (b == d)
			tmp = 1000 + 100 * b;
		else if (c == d)
			tmp = 1000 + 100 * c;
		else {
			if (b > c && b > d)
				tmp = b * 100;
			else if (c > b && c > d)
				tmp = c * 100;
			else if (d > c && d > b)
				tmp = d * 100;
		}

		if (tmp > max)
			max = tmp;
	}
	printf("%d", max);

	return 0;
}