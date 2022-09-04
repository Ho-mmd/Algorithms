#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	
}

//https://www.acmicpc.net/problem/1024
void BOJ1024() {
	int N, L, flag;

	scanf("%d%d", &N, &L);

	for (int i = L; i <= 100; i++) {

		if ((N - i * (i + 1) / 2) % i == 0) {
			flag = (N - i * (i + 1) / 2) / i;
			if (flag >= -1) {
				for (int j = flag + 1; j <= flag + i; j++)
					printf("%d ", j);
				return 0;
			}
		}

	}

	printf("-1");

	return 0;
}