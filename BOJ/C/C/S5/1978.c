//https://www.acmicpc.net/problem/1978
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n, a, count = 0, flag;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		flag = 0;
		for (int j = 2; j <= a; j++) {
			if (a % j == 0)
				flag++;
		}
		if (flag == 1)
			count++;
	}

	printf("%d", count);

	return 0;
}