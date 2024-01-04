//https://www.acmicpc.net/problem/18005
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	long long a;
	scanf("%lld", &a);
	if (a % 2 == 1)
		printf("0");
	else if (a % 4 == 0)
		printf("2");
	else
		printf("1");

	return 0;
}