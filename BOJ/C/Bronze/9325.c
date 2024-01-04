//https://www.acmicpc.net/problem/9325

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int n, pr, cnt, a, b;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &pr);
		scanf("%d", &cnt);
		for (int j = 0; j < cnt; j++) {
			scanf("%d%d", &a, &b);
			pr += a * b;
		}
		printf("%d\n", pr);
	}
	return 0;
}