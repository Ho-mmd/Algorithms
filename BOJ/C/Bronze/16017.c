//https://www.acmicpc.net/problem/16017
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a[4];
	for (int i = 0; i < 4; i++) {
		scanf("%d", &a[i]);
	}
	if (a[0] >= 8 && a[3] >= 8 && a[1] == a[2])
		printf("ignore");
	else
		printf("answer");

	return 0;
}