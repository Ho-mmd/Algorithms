//https://www.acmicpc.net/problem/2010

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int n, a, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		sum += a;
	}
	printf("%d", sum - n + 1);

	return 0;
}