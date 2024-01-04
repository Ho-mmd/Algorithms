//https://www.acmicpc.net/problem/10179
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, i = 0;
	double price[3];
	scanf("%d", &a);
	for (i = 0; i < a; i++) {
		scanf("%lf", &price[i]);
	}
	for (i = 0; i < a; i++) {
		printf("$%.2lf\n", price[i] * 0.8);
	}
	return 0;
}