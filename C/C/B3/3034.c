//https://www.acmicpc.net/problem/3034

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int n, a, b, c, d;
	scanf("%d%d%d", &n, &b, &c);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		if (b * b + c * c >= a * a)
			printf("DA\n");
		else
			printf("NE\n");
	}
	return 0;
}