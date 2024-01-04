//https://www.acmicpc.net/problem/10214

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int n, a, b, aa, bb;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		aa = 0;
		bb = 0;
		for (int j = 0; j < 9; j++) {
			scanf("%d%d", &a, &b);
			aa += a;
			bb += b;
		}
		if (aa > bb)
			printf("Yonsei\n");
		else if (bb > aa)
			printf("Korea\n");
		else
			printf("Draw\n");
	}
	return 0;
}