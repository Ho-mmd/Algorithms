//https://www.acmicpc.net/problem/3009
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a[6];
	for (int i = 0; i < 6; i++) {
		scanf("%d", &a[i]);
	}
	if (a[0] == a[2])
		printf("%d ", a[4]);
	else if (a[0] == a[4])
		printf("%d ", a[2]);
	else
		printf("%d ", a[0]);
	if (a[1] == a[3])
		printf("%d", a[5]);
	else if (a[1] == a[5])
		printf("%d", a[3]);
	else
		printf("%d", a[1]);

	return 0;
}