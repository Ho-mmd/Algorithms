//https://www.acmicpc.net/problem/10797
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int day;
	int car[5];
	int count = 0;
	scanf("%d", &day);
	for (int i = 0; i < 5; i++) {
		scanf("%d", &car[i]);
		if (car[i] == day)
			count++;
	}
	printf("%d", count);

	return 0;
}