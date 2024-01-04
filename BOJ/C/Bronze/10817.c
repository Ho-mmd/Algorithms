//https://www.acmicpc.net/problem/10817
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a[3];
	for (int i = 0; i < 3; i++) {
		scanf("%d", &a[i]);
	}
	if (a[0] >= a[1] && a[1] >= a[2])
		printf("%d", a[1]);
	else if (a[2] >= a[1] && a[1] >= a[0])
		printf("%d", a[1]);
	else if (a[0] >= a[2] && a[2] >= a[1])
		printf("%d", a[2]);
	else if (a[1] >= a[2] && a[2] >= a[0])
		printf("%d", a[2]);
	else
		printf("%d", a[0]);

	return 0;
}