//https://www.acmicpc.net/problem/10101
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a + b + c != 180)
		printf("Error");
	else if (a != b && a != c & b != c)
		printf("Scalene");
	else if ((a == b && b != c) || (a == c && c != b) || (b == c && c != a))
		printf("Isosceles");
	else
		printf("Equilateral");

	return 0;
}