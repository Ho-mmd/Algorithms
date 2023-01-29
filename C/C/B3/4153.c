//https://www.acmicpc.net/problem/4153
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	while (1) {
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0)
			break;
		else if (pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(c, 2) == pow(b, 2) + pow(a, 2))
			printf("right\n");
		else
			printf("wrong\n");
	}
	return 0;
}