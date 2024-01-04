//https://www.acmicpc.net/problem/5063

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int n, r, c, e;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &r, &c, &e);
		if (r + e < c)
			printf("advertise\n");
		else if (r + e == c)
			printf("does not matter\n");
		else
			printf("do not advertise\n");
	}

	return 0;
}