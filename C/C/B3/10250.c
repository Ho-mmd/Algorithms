//https://www.acmicpc.net/problem/10250
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		int H, W, N;
		scanf("%d %d %d", &H, &W, &N);
		if (N % H == 0) {
			printf("%d", H);
			if (N / H >= 10)
				printf("%d\n", N / H);
			else
				printf("0%d\n", N / H);
		}
		else {
			printf("%d", N % H);
			if (N / H + 1 >= 10)
				printf("%d\n", N / H + 1);
			else
				printf("0%d\n", N / H + 1);
		}
	}
	return 0;
}