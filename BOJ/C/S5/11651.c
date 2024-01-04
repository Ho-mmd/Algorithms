//https://www.acmicpc.net/problem/11651
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	int x, y;
}Pos1;
void merge2(Pos1 arr[], int start, int mid, int end) {
	Pos1 tmp, sav[100001];
	int i = start, j = mid + 1, k = 0;

	while (i <= mid && j <= end) {
		if (arr[i].y < arr[j].y) {
			sav[k] = arr[i];
			k++;
			i++;
		}
		else if (arr[i].y == arr[j].y) {
			if (arr[i].x < arr[i].x) {
				sav[k] = arr[i];
				k++;
				i++;
			}
			else {
				sav[k] = arr[j];
				k++;
				j++;
			}
		}
		else {
			sav[k] = arr[j];
			k++;
			j++;
		}
	}

	while (i <= mid) {
		sav[k] = arr[i];
		k++;
		i++;
	}

	while (j <= end) {
		sav[k] = arr[j];
		k++;
		j++;
	}

	while (k > 0) {
		arr[start + k - 1] = sav[k - 1];
		k--;
	}

}
void mergesort2(Pos1 arr[], int start, int end) {
	int mid;

	if (start < end) {
		mid = (start + end) / 2;

		mergesort2(arr, start, mid);
		mergesort2(arr, mid + 1, end);

		merge2(arr, start, mid, end);
	}
	else
		return;
}

int main(void)
{
	int n;

	scanf("%d", &n);

	Pos1* arr = (Pos1*)malloc(sizeof(Pos1) * n);

	for (int i = 0; i < n; i++)
		scanf("%d%d", &arr[i].x, &arr[i].y);

	mergesort2(arr, 0, n - 1);

	for (int i = 0; i < n; i++)
		printf("%d %d\n", arr[i].x, arr[i].y);

	free(arr);

	return 0;
}