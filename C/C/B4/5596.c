//https://www.acmicpc.net/problem/5596
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int score[2][4];
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &score[i][j]);
			if (i == 0)
				sum1 += score[i][j];
			else
				sum2 += score[i][j];
		}
	}
	printf("%d", sum1 > sum2 ? sum1 : sum2);

	return 0;
}