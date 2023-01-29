//https://www.acmicpc.net/problem/10818
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a;
	int big, small;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		int c;
		scanf("%d", &c);
		if (i == 0) {
			big = c;
			small = c;
		}
		else {
			big = big > c ? big : c;
			small = small < c ? small : c;
		}
	}
	printf("%d %d", small, big);
	return 0;
}