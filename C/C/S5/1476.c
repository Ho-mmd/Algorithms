//https://www.acmicpc.net/problem/1476
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int E, S, M, cnt = 1;
	int arr[3] = { 1, 1, 1 };

	scanf("%d%d%d", &E, &S, &M);

	while (1) {
		if (arr[0] > 15)
			arr[0] = 1;
		if (arr[1] > 28)
			arr[1] = 1;
		if (arr[2] > 19)
			arr[2] = 1;

		if (arr[0] == E && arr[1] == S && arr[2] == M)
			break;

		arr[0]++;
		arr[1]++;
		arr[2]++;
		cnt++;
	}

	printf("%d", cnt);

	return 0;
}