//https://www.acmicpc.net/problem/2506

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, i, cnt = 0, sum = 0;

	scanf("%d", &n);

	int* num = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++) {
		scanf("%d", &num[i]);

		if (num[i] == 1) {
			sum++;
			if (num[i - 1] == 1) {
				cnt++;
				sum += cnt;
			}
			else
				cnt = 0;
		}
	}
	free(num);
	printf("%d", sum);

	return 0;
}