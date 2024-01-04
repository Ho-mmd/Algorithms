//https://www.acmicpc.net/problem/1009

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	//제곱 시 끝자리 규칙을 코드로 표현해 풀면 더 간단했음...
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int a, b, temp1 = 0, temp2 = 0;
		scanf("%d %d", &a, &b);
		temp1 = a % 10;
		switch (temp1) {
		case 0:
			printf("10");
			break;
		case 1:
			printf("1");
			break;
		case 2:
			temp2 = b % 4;
			if (temp2 == 1)
				printf("2");
			else if (temp2 == 2)
				printf("4");
			else if (temp2 == 3)
				printf("8");
			else
				printf("6");
			break;
		case 3:
			temp2 = b % 4;
			if (temp2 == 1)
				printf("3");
			else if (temp2 == 2)
				printf("9");
			else if (temp2 == 3)
				printf("7");
			else
				printf("1");
			break;
		case 4:
			temp2 = b % 2;
			if (temp2 == 1)
				printf("4");
			else
				printf("6");
			break;
		case 5:
			printf("5");
			break;
		case 6:
			printf("6");
			break;
		case 7:
			temp2 = b % 4;
			if (temp2 == 1)
				printf("7");
			else if (temp2 == 2)
				printf("9");
			else if (temp2 == 3)
				printf("3");
			else
				printf("1");
			break;
		case 8:
			temp2 = b % 4;
			if (temp2 == 1)
				printf("8");
			else if (temp2 == 2)
				printf("4");
			else if (temp2 == 3)
				printf("2");
			else
				printf("6");
			break;
		case 9:
			temp2 = b % 2;
			if (temp2 == 1)
				printf("9");
			else
				printf("1");
			break;
		}
		printf("\n");
	}
	return 0;
}