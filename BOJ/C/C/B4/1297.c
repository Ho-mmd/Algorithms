//https://www.acmicpc.net/problem/1297
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h> 

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	double row, column;
	double r = sqrt(pow(a, 2) / (pow(b, 2) + pow(c, 2)));
	printf("%d %d", (int)(r * b), (int)(r * c));

	return 0;
}