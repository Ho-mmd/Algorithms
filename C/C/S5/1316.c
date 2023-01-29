//https://www.acmicpc.net/problem/1316
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, j, k, cnt = 0, end;
	char arr[101];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", arr);
		k = 0;
		end = strlen(arr);
		for (j = 0; j < end - 2; j++) {
			for (k = j + 2; k < end; k++) {
				if (arr[j] == arr[k] && arr[k] != arr[k - 1])
					break;
			}

			if (arr[j] == arr[k] && arr[k] != arr[k - 1])
				break;
		}
		if (k == end || k == 0)
			cnt++;
	}

	printf("%d", cnt);

	return 0;
}