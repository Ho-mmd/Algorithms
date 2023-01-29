//https://www.acmicpc.net/problem/2903

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int n, tot = 2;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		tot = 2 * tot - 1;
	}
	printf("%d", tot * tot);

	return 0;
}