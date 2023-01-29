//https://www.acmicpc.net/problem/16430
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int a, b, flag = 0;
	scanf("%d %d", &a, &b);
	int temp = b - a;
	for (int i = temp; i > 1; i--) {
		if (b % i == 0 && temp % i == 0) {
			b /= i;
			temp /= i;
			flag = 1;
		}
		if (flag == 1)
			break;
	}
	printf("%d %d", temp, b);

	return 0;
}