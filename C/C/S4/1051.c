//https://www.acmicpc.net/problem/1051
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int arr[100][100] = { 0 }, a, b, min, ans = 1;
	int c;

	scanf("%d%d", &a, &b);

	min = a > b ? b : a;

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++)
			scanf("%1d", &arr[i][j]);
	}

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			for (int k = 1; k < min; k++) {
				if (i + k < a && j + k < b && arr[i + k][j] == arr[i][j] && arr[i + k][j + k] == arr[i][j] && arr[i][j + k] == arr[i][j]) {
					if (k + 1 > ans)
						ans = k + 1;
				}
			}
		}
	}

	printf("%d", ans * ans);

	return 0;
}