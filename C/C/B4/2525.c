//https://www.acmicpc.net/problem/2525
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int min = (b + c) % 60;
	int hour = a + ((b + c) / 60);
	if (hour > 23)
		hour -= 24;
	printf("%d %d", hour, min);

	return 0;
}