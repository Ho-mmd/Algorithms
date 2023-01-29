//https://www.acmicpc.net/problem/10871

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
int main() {
	int a, b, flag = 0;;
	scanf("%d %d", &a, &b);

	int* arr = (int*)malloc(sizeof(int) * a * 2);
	int* arr1 = (int*)malloc(sizeof(int) * a * 2);

	for (int i = 0; i < a; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] < b) {
			arr1[flag] = arr[i];
			flag++;
		}
	}
	for (int i = 0; i < flag; i++) {
		printf("%d ", arr1[i]);
	}
	free(arr);
	free(arr1);

	return 0;
}