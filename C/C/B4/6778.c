//https://www.acmicpc.net/problem/6778
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b, flag = 0;
	scanf("%d %d", &a, &b);
	if (a >= 3 && b <= 4)
		printf("TroyMartian\n");
	if (a <= 6 && b >= 2)
		printf("VladSaturnian\n");
	if (a <= 2 && b <= 3)
		printf("GraemeMercurian\n");
	if (flag == 0)
		printf("");

	return 0;
}