//https://www.acmicpc.net/problem/9656
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n, ans;

	scanf("%d", &n);

	ans = n % 4;

	if (ans == 1 || ans == 3)
		printf("CY");
	else
		printf("SK");

	return 0;
}