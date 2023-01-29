//https://www.acmicpc.net/problem/1547

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int n, a, b, flag = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		if (flag == a)
			flag = b;
		else if (flag == b)
			flag = a;
	}
	printf("%d", flag);

	return 0;
}