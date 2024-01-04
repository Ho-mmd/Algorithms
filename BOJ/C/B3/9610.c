//https://www.acmicpc.net/problem/9610

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int n, a = 0, b = 0, c = 0, d = 0, e = 0, x, y;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &x, &y);
		if (x == 0 || y == 0)
			e++;
		else if (x > 0 && y > 0)
			a++;
		else if (x < 0 && y > 0)
			b++;
		else if (x < 0 && y < 0)
			c++;
		else if (x > 0 && y < 0)
			d++;
	}
	printf("Q1: %d\nQ2: %d\nQ3: %d\nQ4: %d\nAXIS: %d", a, b, c, d, e);

	return 0;
}