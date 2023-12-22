//https://www.acmicpc.net/problem/21300
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int a, sum = 0;
	for (int i = 0; i < 6; i++) {
		scanf("%d", &a);
		sum += a;
	}
	printf("%d", 5 * sum);

	return 0;
}