//https://www.acmicpc.net/problem/2455

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int max = 0, temp1 = 0;
	for (int i = 0; i < 4; i++) {
		int a, b, temp2 = 0;
		scanf("%d %d", &a, &b);
		if (i == 0) {
			max = b;
			temp1 = b;
		}
		else {
			temp2 = b - a;
			temp1 += temp2;
		}
		if (temp1 > max)
			max = temp1;
	}
	printf("%d", max);

	return 0;
}