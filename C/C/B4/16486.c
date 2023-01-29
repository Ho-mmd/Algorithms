//https://www.acmicpc.net/problem/16486
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b;
	double square = 0, circle = 0;
	scanf("%d %d", &a, &b);
	square = a * 2.0;
	circle = b * 2 * 3.141592;
	printf("%.6lf", square + circle);

	return 0;
}