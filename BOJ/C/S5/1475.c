//https://www.acmicpc.net/problem/1475
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void)
{
	char tmp[101];
	int arr[10] = { 0 };
	int max;

	scanf("%s", tmp);

	for (int i = 0; i < strlen(tmp); i++) {
		arr[tmp[i] - '0']++;
	}

	arr[6] += arr[9];
	arr[6] = arr[6] / 2 + arr[6] % 2;
	arr[9] = 0;
	max = arr[0];

	for (int j = 1; j < 9; j++) {
		if (max < arr[j])
			max = arr[j];
	}

	printf("%d", max);

	return 0;
}