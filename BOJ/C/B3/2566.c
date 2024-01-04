//https://www.acmicpc.net/problem/2566

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a[9][9], max = 0, row, col;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &a[i][j]);
			if (a[i][j] > max) {
				max = a[i][j];
				row = i + 1;
				col = j + 1;
			}
		}
	}
	printf("%d\n%d %d", max, row, col);

	return 0;
}