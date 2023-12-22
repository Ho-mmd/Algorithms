//https://www.acmicpc.net/problem/17009
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a[6];
	int sumA = 0, sumB = 0;
	for (int i = 0; i < 6; i++) {
		scanf("%d", &a[i]);
	}
	sumA = a[0] * 3 + a[1] * 2 + a[2];
	sumB = a[3] * 3 + a[4] * 2 + a[5];

	if (sumA > sumB)
		printf("A");
	else if (sumB > sumA)
		printf("B");
	else printf("T");

	return 0;
}