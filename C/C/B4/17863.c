//https://www.acmicpc.net/problem/17863
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	if (a >= 5550000 && a <= 5559999)
		printf("YES");
	else
		printf("NO");

	return 0;
}