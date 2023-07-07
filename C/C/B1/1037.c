//https://www.acmicpc.net/problem/1037

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int num;
	int N, max = 0, min = 1000001;
	int ans;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &num);

		if (num > max)
			max = num;

		if (num < min)
			min = num;
	}

	ans = max * min;
	
	printf("%d", ans);

	return 0;
}