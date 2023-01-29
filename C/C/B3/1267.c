//https://www.acmicpc.net/problem/1267

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int n, a, m = 0, y = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		y += (a / 30 + 1) * 10;
		m += (a / 60 + 1) * 15;
	}
	if (y < m)
		printf("Y %d", y);
	else if (y == m)
		printf("Y M %d", y);
	else
		printf("M %d", m);

	return 0;
}