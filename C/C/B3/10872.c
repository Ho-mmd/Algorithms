//https://www.acmicpc.net/problem/10872
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, fac = 1;
	scanf("%d", &a);
	for (int i = a; i > 0; i--) {
		fac *= i;
	}
	printf("%d", fac);

	return 0;
}