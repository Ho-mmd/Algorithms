//https://www.acmicpc.net/problem/9498
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a;

	scanf("%d", &a);

	if (a >= 90)
		printf("A");
	else if (a >= 80)
		printf("B");
	else if (a >= 70)
		printf("C");
	else if (a >= 60)
		printf("D");
	else
		printf("F");

	return 0;
}