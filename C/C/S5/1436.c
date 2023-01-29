//https://www.acmicpc.net/problem/1436
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, i = 666, cnt = 0;
	char cmp[4] = "666";
	char tmp[101];

	scanf("%d", &n);

	while (1) {
		if (cnt == n)
			break;

		sprintf(tmp, "%d", i);

		if (strstr(tmp, cmp) != NULL) {
			cnt++;
		}

		i++;
	}

	i--;

	printf("%d", i);

	return 0;
}