//https://www.acmicpc.net/problem/2751
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int start, int mid, int end) {
	int b[1000001];
	int i = start, j = mid + 1, k = 0;

	while (i <= mid && j <= end) {
		if (arr[i] <= arr[j]) {
			b[k] = arr[i];
			k++;
			i++;
		}
		else {
			b[k] = arr[j];
			j++;
			k++;
		}
	}

	while (i <= mid) {
		b[k] = arr[i];
		i++;
		k++;
	}

	while (j <= end) {
		b[k] = arr[j];
		j++;
		k++;
	}

	k--;

	while (k >= 0) {
		arr[start + k] = b[k];
		k--;
	}
}
void mergeSort(int arr[], int start, int end) {
	if (start < end) {
		int mid = (start + end) / 2;

		mergeSort(arr, start, mid);
		mergeSort(arr, mid + 1, end);

		merge(arr, start, mid, end);
	}
	else
		return;
}

int main(void)
{
	int n, i;

	scanf("%d", &n);

	int* arr = malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	mergeSort(arr, 0, n - 1);

	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);

	free(arr);

	return 0;
}