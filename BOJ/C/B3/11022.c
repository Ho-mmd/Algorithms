//https://www.acmicpc.net/problem/11022

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, flag = 1;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		int b, c;
		scanf("%d %d", &b, &c);
		printf("Case #%d: %d + %d = %d\n", flag, b, c, b + c);
		flag++;
	}
	return 0;
}