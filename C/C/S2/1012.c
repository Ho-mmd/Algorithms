//https://www.acmicpc.net/problem/1012
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int CheckAr(int arr[][51], int i, int j, int M, int N) {
	if (arr[i][j] == 0)
		return 0;

	if (arr[i][j] == 1 || arr[i][j] == 2) {
		arr[i][j] = 2;

		if (arr[i - 1][j] == 1 && i != 0) {
			arr[i - 1][j] = 2;
			CheckAr(arr, i - 1, j, M, N);
		}


		if (arr[i + 1][j] == 1 && i != M - 1) {
			arr[i + 1][j] = 2;
			CheckAr(arr, i + 1, j, M, N);
		}


		if (arr[i][j - 1] == 1 && j != 0) {
			arr[i][j - 1] = 2;
			CheckAr(arr, i, j - 1, M, N);
		}


		if (arr[i][j + 1] == 1 && j != N - 1) {
			arr[i][j + 1] = 2;
			CheckAr(arr, i, j + 1, M, N);
		}
	}
}

int main(void)
{
	int T, M, N, K, a, b, cnt;
	int arr[51][51] = { 0 };

	scanf("%d%", &T);

	for (int k = 0; k < T; k++) {
		scanf("%d%d%d", &M, &N, &K);

		cnt = 0;

		for (int i = 0; i < K; i++) {
			scanf("%d%d", &a, &b);
			arr[a][b] = 1;
		}

		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				if (arr[i][j] == 1) {
					CheckAr(arr, i, j, M, N);
					cnt++;
				}
			}
		}

		printf("%d\n", cnt);

		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++)
				arr[i][j] = 0;
		}
	}

	return 0;
}