//https://www.acmicpc.net/problem/1439
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void)
{
	char arr[1000001];
	int cnt = 0;

	scanf("%s", arr);

	for (int i = 1; i < strlen(arr); i++) {
		if (arr[i] != arr[i - 1])
			cnt++;
	}

	printf("%d", cnt / 2 + cnt % 2);

	return 0;
}