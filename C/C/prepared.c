#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void q(int arr[], int start, int end) {
	if (start >= end)
		return;

	int pivot = start;
	int left = start + 1;
	int right = end;
    int tmp;

	while (left <= right) {
        while (left <= end && arr[left] <= arr[pivot])
            left += 1;

        while (right > start && arr[right] >= arr[pivot])
            right -= 1;

        if (left > right) {
            tmp = arr[right];
            arr[right] = arr[pivot];
            arr[pivot] = tmp;
        }
        else {
            tmp = arr[left];
            arr[left] = arr[right];
            arr[right] = tmp;
        }
	}
    q(arr, start, right - 1);
    q(arr, right + 1, end);
}

int main() {
    int a[5] = { 4, 3, 1, 2, 7 };

    q(a, 0, 4);

    for (int i = 0; i < 5; i++)
        printf("%d ", a[i]);

	return 0;
}