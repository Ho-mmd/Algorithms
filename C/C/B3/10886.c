//https://www.acmicpc.net/problem/10886

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int n, a, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		if (a == 1)
			sum++;
	}
	if (sum > n - sum)
		printf("Junhee is cute!");
	else
		printf("Junhee is not cute!");

	return 0;
}