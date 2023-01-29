//https://www.acmicpc.net/problem/13895
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	char a[20];
	gets(a);
	if ((int)a[0] + (int)a[4] - '0' == (int)a[8])
		printf("YES");
	else
		printf("NO");

	return 0;
}