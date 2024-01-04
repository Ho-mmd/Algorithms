//https://www.acmicpc.net/problem/5928
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b, c;
	int temp1, temp2;
	scanf("%d %d %d", &a, &b, &c);
	if (a <= 11) {
		if (a < 11)
			printf("-1");
		else {
			if (b < 11)
				printf("-1");
			else if (b == 11) {
				if (c < 11)
					printf("-1");
				else {
					printf("%d", c - 11);
				}
			}
			else {
				printf("%d", 60 * b + c - (60 * 11 + 11));
			}
		}
	}
	else {
		temp1 = a * 1440 + b * 60 + c;
		temp2 = 11 * 1440 + 11 * 60 + 11;
		printf("%d", temp1 - temp2);
	}

	return 0;
}