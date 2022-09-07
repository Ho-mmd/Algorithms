#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	
}

//https://www.acmicpc.net/problem/1024
void BOJ1024() {
	int N, L, flag;

	scanf("%d%d", &N, &L);

	for (int i = L; i <= 100; i++) {

		if ((N - i * (i + 1) / 2) % i == 0) {
			flag = (N - i * (i + 1) / 2) / i;
			if (flag >= -1) {
				for (int j = flag + 1; j <= flag + i; j++)
					printf("%d ", j);
				return 0;
			}
		}

	}

	printf("-1");

	return 0;
}

//https://www.acmicpc.net/problem/1124
int arr[100001];
int Prime(int n) {
	int cnt = 0, i = 2;

	while (n != 1) {
		if (n % i == 0) {
			n /= i;
			cnt++;
		}
		else
			i++;
	}

	if (arr[cnt] != 0)
		return 1;

	return 0;
}
void BOJ1124() {
	int a, b, cnt = 0;

	scanf("%d%d", &a, &b);

	for (int i = 2; i <= 100000; i++)
		arr[i] = i;

	for (int i = 2; i <= 100000; i++) {
		if (arr[i] == 0)
			continue;
		for (int j = 2 * i; j <= 100000; j += i)
			arr[j] = 0;
	}

	for (int i = a; i <= b; i++) {
		if (arr[i] == 0)
			cnt += Prime(i);
	}

	printf("%d", cnt);

	return 0;
}

//https://www.acmicpc.net/problem/1012
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
void BOJ1012() {
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
