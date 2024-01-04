//https://www.acmicpc.net/problem/11650
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x;
	int y;
}Pos;
void merge1(Pos arr[], int start, int mid, int end) {
	Pos tmp[100001];
	int i = start, j = mid + 1, k = 0;

	while (i <= mid && j <= end) {
		if (arr[i].x < arr[j].x) {
			tmp[k] = arr[i];
			k++;
			i++;
		}
		else if (arr[i].x == arr[j].x) {
			if (arr[i].y > arr[j].y) {
				tmp[k] = arr[j];
				k++;
				j++;
			}
			else {
				tmp[k] = arr[i];
				k++;
				i++;
			}
		}
		else {
			tmp[k] = arr[j];
			k++;
			j++;
		}
	}

	while (i <= mid) {
		tmp[k] = arr[i];
		k++;
		i++;
	}

	while (j <= end) {
		tmp[k] = arr[j];
		k++;
		j++;
	}

	while (k > 0) {
		arr[start + k - 1] = tmp[k - 1];
		k--;
	}
}
void mergesort1(Pos arr[], int start, int end) {
	int mid;

	if (start < end) {
		mid = (start + end) / 2;

		mergesort1(arr, start, mid);
		mergesort1(arr, mid + 1, end);
		merge1(arr, start, mid, end);
	}
	else
		return;

}

int main(void)
{
	int n;

	scanf("%d", &n);

	Pos* arr = (Pos*)malloc(sizeof(Pos) * n);

	for (int i = 0; i < n; i++)
		scanf("%d %d", &arr[i].x, &arr[i].y);

	mergesort1(arr, 0, n - 1);

	for (int i = 0; i < n; i++)
		printf("%d %d\n", arr[i].x, arr[i].y);

	free(arr);

	return 0;
}