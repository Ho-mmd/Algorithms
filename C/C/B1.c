#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	
}

//https://www.acmicpc.net/problem/1037
void BOJ1037() {
	int num;
	int N, max = 0, min = 1000001;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &num);

		if (num > max)
			max = num;

		if (num < min)
			min = num;
	}

	printf("%d", max * min);

	return 0;
}
