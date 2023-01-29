//https://www.acmicpc.net/problem/2490

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	for (int i = 0; i < 3; i++) {
		int flag = 0;
		for (int j = 0; j < 4; j++) {
			int a[4];
			scanf("%d", &a[i]);
			if (a[i] == 0)
				flag++;
		}
		if (flag == 1)
			printf("A\n");
		else if (flag == 2)
			printf("B\n");
		else if (flag == 3)
			printf("C\n");
		else if (flag == 4)
			printf("D\n");
		else
			printf("E\n");
	}
	return 0;
}