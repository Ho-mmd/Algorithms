//https://www.acmicpc.net/problem/1181
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char string[51];
	int length;
} str;
str sort[20001];
void merge0(str* arr, int first, int mid, int last) {
	int i = first;
	int j = mid + 1;
	int k = first;

	while (i <= mid && j <= last) {
		if (arr[i].length < arr[j].length) {
			sort[k++] = arr[i++];
		}
		else if (arr[i].length > arr[j].length) {
			sort[k++] = arr[j++];
		}
		else {
			if (strcmp(arr[i].string, arr[j].string) < 0) {
				sort[k++] = arr[i++];
			}
			else {
				sort[k++] = arr[j++];
			}
		}
	}

	if (i > mid) {
		while (j <= last)
			sort[k++] = arr[j++];
	}
	else {
		while (i <= mid)
			sort[k++] = arr[i++];
	}

	for (k = first; k <= last; k++)
		arr[k] = sort[k];
}
void mergesort0(str* arr, int first, int last) {
	int mid;

	if (first < last) {
		mid = (first + last) / 2;
		mergesort0(arr, first, mid);
		mergesort0(arr, mid + 1, last);
		merge0(arr, first, mid, last);
	}
}
int main(void)
{
	int N;
	scanf("%d", &N);
	str* arr = malloc(sizeof(str) * N);

	for (int i = 0; i < N; i++) {
		scanf("%s", arr[i].string);
		arr[i].length = strlen(arr[i].string);
	}

	mergesort0(arr, 0, N - 1);

	printf("%s\n", arr[0].string);
	for (int i = 1; i < N; i++) {
		if (strcmp(arr[i - 1].string, arr[i].string) != 0)
			printf("%s\n", arr[i].string);
	}
	return 0;
}