//https://www.acmicpc.net/problem/8393
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int n, total;
	total = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		total += i;
	}
	printf("%d", total);
	return 0;
}