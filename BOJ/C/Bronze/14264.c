//https://www.acmicpc.net/problem/14264
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main() {
	int a;
	scanf("%d", &a);
	printf("%.9lf", 0.5 * pow(a, 2) * sin(60 * PI / 180));

	return 0;
}