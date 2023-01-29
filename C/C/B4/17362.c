//https://www.acmicpc.net/problem/17362
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	int ans = a % 8;
	if (ans == 0 || ans == 2)
		printf("2");
	else if (ans == 3 || ans == 7)
		printf("3");
	else if (ans == 4 || ans == 6)
		printf("4");
	else if (ans == 5)
		printf("5");
	else
		printf("1");

	return 0;
}