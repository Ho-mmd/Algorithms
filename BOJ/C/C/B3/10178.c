//https://www.acmicpc.net/problem/10178

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int n, a, b;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &a, &b);
		printf("You get %d piece(s) and your dad gets %d piece(s).\n", a / b, a % b);
	}
	return 0;
}