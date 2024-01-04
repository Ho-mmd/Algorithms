//https://www.acmicpc.net/problem/15873
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	char a[5];
	int sum = 0;
	scanf("%s", &a);
	if (a[1] == '0' && a[3] == '0')
		sum = 20;
	else if (a[1] == '0')
		sum = 10 + (int)a[2] - '0';
	else if (a[2] == '0')
		sum = (int)a[0] - '0' + 10;
	else
		sum = (int)a[0] - '0' + (int)a[1] - '0';
	printf("%d", sum);

	return 0;
}