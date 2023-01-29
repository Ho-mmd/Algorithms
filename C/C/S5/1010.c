//https://www.acmicpc.net/problem/1010
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n, x, y;
	int con;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		con = 1;
		scanf("%d%d", &x, &y);
		for (int j = 0; j < x; j++) {
			con *= y - j;
			con /= j + 1;
		}
		printf("%d\n", con);
	}

	return 0;
}