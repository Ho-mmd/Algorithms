//https://www.acmicpc.net/problem/2588
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	char a[4], b[4];
	int sum = 0;
	int j = 1;

	scanf("%s %s", &a, &b);

	int temp = (a[0] - '0') * 100 + (a[1] - '0') * 10 + (a[2] - '0') * 1;

	for (int i = 2; i > -1; i--) {
		sum += temp * (b[i] - '0') * j;
		printf("%d\n", temp * (b[i] - '0'));
		j *= 10;
	}

	printf("%d\n", sum);

	return 0;
}