//https://www.acmicpc.net/problem/4101

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b;
	while (1) {
		scanf("%d %d", &a, &b);

		if (a == 0 && b == 0)
			return 0;
		else if (a <= b)
			printf("No\n");
		else
			printf("Yes\n");
	}
	return 0;
}