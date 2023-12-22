//https://www.acmicpc.net/problem/2581
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n, i, a, b, flag = 1, sum = 0, min;

	scanf("%d%d", &a, &b);

	for (n = a; n <= b; n++) {
		for (i = 2; i < n; i++) {
			if (n % i == 0)
				break;

		}
		if (i == n) {
			sum += n;
			if (flag == 1) {
				min = n;
				flag = 0;
			}
		}
	}

	if (sum == 0)
		printf("-1");
	else
		printf("%d\n%d", sum, min);

	return 0;
}