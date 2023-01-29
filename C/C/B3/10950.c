//https://www.acmicpc.net/problem/10950

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, flag = 0, sum = 0;
	int* arr;

	scanf("%d", &a);

	arr = (int*)malloc(sizeof(int) * a * 3);

	for (int i = 0; i < a * 2; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < a * 2; i++) {
		sum += arr[i];
		if (flag == 1) {
			printf("%d\n", sum);
			flag = 0;
			sum = 0;
		}
		else
			flag++;
	}
	free(arr);
	return 0;
}