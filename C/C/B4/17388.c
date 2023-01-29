//https://www.acmicpc.net/problem/17388
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a[3];
	int min = 100;
	int flag = 0;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &a[i]);
		if (min > a[i]) {
			min = a[i];
			flag = i;
		}
	}
	if (a[0] + a[1] + a[2] >= 100)
		printf("OK");
	else
		switch (flag) {
		case 0:
			printf("Soongsil");
			break;
		case 1:
			printf("Korea");
			break;
		case 2:
			printf("Hanyang");
			break;
		}

	return 0;
}