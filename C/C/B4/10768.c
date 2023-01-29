//https://www.acmicpc.net/problem/10768
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a < 2 || (a == 2 && b < 18))
		printf("Before");
	else if (a == 2 && b == 18)
		printf("Special");
	else
		printf("After");

	return 0;
}