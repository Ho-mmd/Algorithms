//https://www.acmicpc.net/problem/10539

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int n, a, pre = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		printf("%d ", a * (i + 1) - pre);
		pre += a * (i + 1) - pre;
	}
	return 0;
}