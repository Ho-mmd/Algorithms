//https://www.acmicpc.net/problem/8979
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int arr[1001][5] = { 0 }, N, K, gold = 1, silver = 0, bronze = 0;
	int flag;

	scanf("%d%d", &N, &K);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &arr[i][j]);
		}
		if (arr[i][0] == K)
			flag = i;
	}

	for (int i = 0; i < N; i++) {
		if (arr[i][1] > arr[flag][1])
			gold++;

		else if (arr[i][1] == arr[flag][1] && arr[i][2] > arr[flag][2])
			silver++;

		else if (arr[i][1] == arr[flag][1] && arr[i][2] == arr[flag][2] && arr[i][3] > arr[flag][3])
			bronze++;
	}

	printf("%d", gold + silver + bronze);

	return 0;
}