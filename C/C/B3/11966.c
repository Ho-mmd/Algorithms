//https://www.acmicpc.net/problem/11966

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main() {
	int n;
	double a;

	scanf("%d", &n);

	a = log2(n);

	if (a - (int)a == 0)
		printf("1");
	else
		printf("0");

	return 0;
}