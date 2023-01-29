//https://www.acmicpc.net/problem/2740
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, d, tot;

	int mtx1[100][100];
	int mtx2[100][100];

	scanf("%d%d", &a, &b);

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++)
			scanf("%d", &mtx1[i][j]);
	}

	scanf("%d%d", &c, &d);

	for (int i = 0; i < c; i++) {
		for (int j = 0; j < d; j++)
			scanf("%d", &mtx2[i][j]);
	}

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < d; j++) {
			tot = 0;
			for (int k = 0; k < b; k++) {
				tot += mtx1[i][k] * mtx2[k][j];
			}
			printf("%d ", tot);
		}
		printf("\n");
	}

	return 0;
}