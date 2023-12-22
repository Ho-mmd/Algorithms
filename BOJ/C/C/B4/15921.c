//https://www.acmicpc.net/problem/15921
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b, sum = 0;
	double temp = 0;
	scanf("%d", &a);

	for (int i = 0; i < a; i++) {
		scanf("%d", &b);
		sum += b;
		temp += b * (1.0 / a);
	}

	if (a == 0 || temp == 0)
		printf("divide by zero");
	else printf("1.00");

	return 0;
}