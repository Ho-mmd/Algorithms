//https://www.acmicpc.net/problem/2965

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b, c, cnt = 0;
	scanf("%d%d%d", &a, &b, &c);
	while (1) {
		if (a + 1 == b && b + 1 == c)
			break;

		if (c - b >= b - a) {
			a = b;
			b++;
		}
		else if (b - a > c - b) {
			c = b;
			b--;
		}
		cnt++;
	}
	printf("%d", cnt);
	return 0; 
}