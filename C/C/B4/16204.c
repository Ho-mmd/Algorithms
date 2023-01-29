//https://www.acmicpc.net/problem/16204
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b, c;
	int oc = 0, xc = 0;
	scanf("%d%d%d", &a, &b, &c);
	oc = b > c ? c : b;
	xc = a - (b > c ? b : c);
	printf("%d", oc + xc);

	return 0;
}