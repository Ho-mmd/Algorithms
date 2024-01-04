//https://www.acmicpc.net/problem/5565

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
	int* a = (int*)malloc(sizeof(int) * 10), sum = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
		if (i != 0)
			sum += a[i];
	}
	printf("%d", a[0] - sum);
	free(a);
	return 0;
}