//https://www.acmicpc.net/problem/5532
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b, c, d, e;
	int tot = 0;
	int flag = 0;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	if ((b / d) > (c / e)) {
		tot = b / d;
		flag = 0;
	}
	else {
		tot = c / e;
		flag = 1;
	}

	if (flag == 0 && tot * d == b)
		printf("%d", a - tot);
	else if (flag == 0 && tot * d != b)
		printf("%d", a - tot - 1);
	else if (flag == 1 && tot * e != c)
		printf("%d", a - tot - 1);
	else
		printf("%d", a - tot);

	return 0;
}