//https://www.acmicpc.net/problem/2720

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int n, ch;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &ch);
		printf("%d ", ch / 25);
		printf("%d ", (ch % 25) / 10);
		printf("%d ", (ch % 25 % 10) / 5);
		printf("%d\n", ch % 5);
	}
	return 0;
}