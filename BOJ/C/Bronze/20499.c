//https://www.acmicpc.net/problem/20499
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d/%d/%d", &a, &b, &c);
	if (a + c < b || b == 0)
		printf("hasu");
	else
		printf("gosu");

	return 0;
}