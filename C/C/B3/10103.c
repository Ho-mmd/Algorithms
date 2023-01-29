//https://www.acmicpc.net/problem/10103

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a = 100, b = 100, n, aa, bb;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &aa, &bb);
		if (aa > bb)
			b -= aa;
		else if (aa < bb)
			a -= bb;
	}
	printf("%d\n%d", a, b);

	return 0;
}