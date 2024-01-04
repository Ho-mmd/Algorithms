//https://www.acmicpc.net/problem/11948
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int score[6];
	int min1 = 100;
	int min2 = 100;
	int sum = 0;
	for (int i = 0; i < 6; i++) {
		scanf("%d", &score[i]);
		sum += score[i];
		if (i < 4) {
			if (score[i] < min1)
				min1 = score[i];
		}
		else
			if (score[i] < min2)
				min2 = score[i];
	}
	printf("%d", sum - min1 - min2);
	return 0;
}