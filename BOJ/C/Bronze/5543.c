//https://www.acmicpc.net/problem/5543
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a[3];
	int min_a;
	int b[2];
	int min_b;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &a[i]);
		if (i == 0)
			min_a = a[i];
		else if (min_a > a[i])
			min_a = a[i];
	}
	for (int i = 0; i < 2; i++) {
		scanf("%d", &b[i]);
		if (i == 0)
			min_b = b[i];
		else if (min_b > b[i])
			min_b = b[i];
	}
	printf("%d", min_a + min_b - 50);

	return 0;
}