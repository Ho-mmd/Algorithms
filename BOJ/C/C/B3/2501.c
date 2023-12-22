//https://www.acmicpc.net/problem/2501

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b, flag = 0;
	scanf("%d %d", &a, &b);
	for (int i = 1; i <= a; i++) {
		if (a % i == 0)
			flag++;

		if (a % i == 0 && flag == b) {
			printf("%d", i);
			return 0;
		}
	}
	if (b > flag)
		printf("0");
	return 0;
}