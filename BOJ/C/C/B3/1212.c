//https://www.acmicpc.net/problem/1212

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main() {
	char a[333445];
	int len, temp;
	scanf("%s", a);
	len = strlen(a);
	for (int i = 0; i < len; i++) {
		temp = a[i] - '0';
		if (i == 0 && temp <= 3) {
			if (a[i] == '0')
				printf("0");
			else if (a[i] == '1')
				printf("1");
			else if (a[i] == '2')
				printf("10");
			else
				printf("11");
		}
		else {
			printf("%d", temp / 2 / 2);
			printf("%d", temp / 2 % 2);
			printf("%d", temp % 2 % 2);
		}
	}
	return 0;
}