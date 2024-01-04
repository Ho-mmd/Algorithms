//https://www.acmicpc.net/problem/19944
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	if (b == 1 || b == 2)
		printf("NEWBIE!");
	else if (b <= a)
		printf("OLDBIE!");
	else
		printf("TLE!");

	return 0;
}