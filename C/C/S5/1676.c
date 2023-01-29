//https://www.acmicpc.net/problem/1676
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	printf("%d", n / 5 + n / 25 + n / 125);

	return 0;
}