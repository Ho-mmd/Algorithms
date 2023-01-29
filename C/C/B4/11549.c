//https://www.acmicpc.net/problem/11549
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a[6];
	int count = 0;
	for (int i = 0; i < 6; i++) {
		scanf("%d", &a[i]);
		if (a[0] == a[i])
			count++;
	}
	printf("%d", count - 1);

	return 0;
}