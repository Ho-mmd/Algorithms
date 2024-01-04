//https://www.acmicpc.net/problem/2921

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int n, sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= i; j++) {
			sum += i + j;
		}
	}
	printf("%d", sum);
	return 0;
}