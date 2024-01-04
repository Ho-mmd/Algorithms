//https://www.acmicpc.net/problem/2875

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	//내 답안
	/*int N, M, K, Ntmp, Ntemp, a, b, c;
	scanf("%d %d %d", &N, &M, &K);
	Ntmp = N / 2;
	Ntemp = N % 2;
	if (K == 0)
		printf("%d", M > Ntmp ? Ntmp : M);
	else if (Ntmp > M) {
		c = 2 * (Ntmp - M) - K;
		if (c >= 0)
			printf("%d", M);
		else {
			c *= -1;
			a = c / 3;
			b = c % 3;
			M -= a;
			if (b == 1 && Ntemp == 1 || b == 0)
				printf("%d", M);
			else
				printf("%d", M - 1);
		}
	}
	else {
		c = M - Ntmp - K;
		if (c >= 0)
			printf("%d", Ntmp);
		else {
			c *= -1;
			a = c / 3;
			b = c % 3;
			Ntmp -= a;
			if (b == 1 && Ntemp == 1 || b == 0)
				printf("%d", Ntmp);
			else
				printf("%d", Ntmp - 1);
		}
	}
	return 0;*/

	//정석답안
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	while (c) {
		if (a >= 2 * b)
			a--;
		else
			b--;
		c--;
	}
	printf("%d", a > b ? b : a);

	return 0;
}