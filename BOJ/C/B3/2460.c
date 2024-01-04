//https://www.acmicpc.net/problem/2460

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int minus, plus, max = 0, sum = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d %d", &minus, &plus);
		sum -= minus;
		sum += plus;

		if (sum > max)
			max = sum;
	}

	printf("%d", max);

	return 0;
}