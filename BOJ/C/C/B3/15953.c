//https://www.acmicpc.net/problem/15953

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int n, a, b;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		if (a == 1)
			a = 5000000;
		else if (2 <= a && a <= 3)
			a = 3000000;
		else if (4 <= a && a <= 6)
			a = 2000000;
		else if (7 <= a && a <= 10)
			a = 500000;
		else if (11 <= a && a <= 15)
			a = 300000;
		else if (16 <= a && a <= 21)
			a = 100000;
		else
			a = 0;
		if (b == 1)
			b = 5120000;
		else if (2 <= b && b <= 3)
			b = 2560000;
		else if (4 <= b && b <= 7)
			b = 1280000;
		else if (8 <= b && b <= 15)
			b = 640000;
		else if (16 <= b && b <= 31)
			b = 320000;
		else
			b = 0;
		printf("%d\n", a + b);
	}
	return 0;
}