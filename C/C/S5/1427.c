//https://www.acmicpc.net/problem/1427
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void)
{
	char arr[11];
	int cnt[10] = { 0 };

	scanf("%s", arr);

	for (int i = 0; i <= strlen(arr); i++)
		cnt[(int)arr[i] - 48]++;

	for (int j = 9; j >= 0; j--) {
		while (cnt[j] != 0) {
			printf("%d", j);
			cnt[j]--;
		}
	}

	return 0;
}