//https://www.acmicpc.net/problem/16600
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main() {
	long long a;
	double b;
	scanf("%lld", &a);
	b = sqrt(a);
	printf("%.6lf", b * 4);

	return 0;
}