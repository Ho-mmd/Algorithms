//https://www.acmicpc.net/problem/7568
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, i, j, cnt;

	scanf("%d", &n);

	int* he = malloc(sizeof(int) * n);
	int* we = malloc(sizeof(int) * n);
	int* con = malloc(sizeof(int) * n);

	for (i = 0; i < n; i++) {
		scanf("%d", &he[i]);
		scanf("%d", &we[i]);
		con[i] = 0;
	}

	for (i = 0; i < n; i++) {
		cnt = 1;

		for (j = 0; j < n; j++) {
			if (he[i] < he[j]) {
				if (we[i] < we[j])
					cnt++;
			}
		}

		con[i] = cnt;
	}

	for (i = 0; i < n; i++)
		printf("%d ", con[i]);

	free(he);
	free(we);
	free(con);

	return 0;
}