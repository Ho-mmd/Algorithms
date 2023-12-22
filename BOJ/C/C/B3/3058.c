//https://www.acmicpc.net/problem/3058

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b, sum, min;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		sum = 0;
		for (int j = 0; j < 7; j++) {
			scanf("%d", &b);
			if (b % 2 == 0) {
				if (sum == 0) {
					min = b;
				}
				else if (min > b)
					min = b;
				sum += b;
			}
		}
		printf("%d %d\n", sum, min);
	}

	return 0;
}