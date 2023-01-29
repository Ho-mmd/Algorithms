//https://www.acmicpc.net/problem/16199
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b, c, d, e, f;
	scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
	if (d > a) {
		if (e == b) {
			if (f >= c) {
				printf("%d\n", d - a);
			}
			else
				printf("%d\n", d - a - 1);
		}
		else if (e > b)
			printf("%d\n", d - a);
		else
			printf("%d\n", d - a - 1);
	}
	else
		printf("%d\n", 0);

	printf("%d\n", d - a + 1);
	printf("%d\n", d - a);

	return 0;
}