//https://www.acmicpc.net/problem/9085

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int n, k, num, sum;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &k);
		sum = 0;
		for (int j = 0; j < k; j++) {
			scanf("%d", &num);
			sum += num;
		}
		printf("%d\n", sum);
	}
	return 0;
}