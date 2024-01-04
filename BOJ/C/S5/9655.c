//https://www.acmicpc.net/problem/9655
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n, flag = 0;

	scanf("%d", &n);

	while (n != 0) {
		if (n > 3)
			n -= 3;
		else
			n -= 1;

		if (flag == 1)
			flag = 0;
		else
			flag = 1;
	}

	if (flag == 1)
		printf("SK");
	else
		printf("CY");

	return 0;

	return 0;
}