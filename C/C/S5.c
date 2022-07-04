#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void Quicksort(int arr[], int start, int end) {
	int index;

	if (start < end) {
		index = Partition(arr, start, end);
		Quicksort(arr, start, index - 1);
		Quicksort(arr, index + 1, end);
	}
	else
		return;
}

int Partition(int arr[], int start, int end) {
	int tool = (start + end) / 2;
	int temp;

	temp = arr[tool];
	arr[tool] = arr[end];
	arr[end] = temp;

	int pivot = arr[end];
	int i, index = start;

	for (i = start; i < end; i++) {
		if (arr[i] <= pivot) {
			temp = arr[i];
			arr[i] = arr[index];
			arr[index] = temp;
			index++;
		}
	}

	temp = arr[index];
	arr[index] = arr[end];
	arr[end] = temp;

	return index;
}

int main(void) {
	int n, i;

	scanf("%d", &n);

	int* arr = malloc(sizeof(int) * n);

	for (i = 0; i < n; i++) 
		scanf("%d", &arr[i]);
	
	Quicksort(arr, 0, n - 1);

	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);

	free(arr);

	return 0;
}


//https://www.acmicpc.net/problem/4673
void BOJ4673() {
	int sum, a = 1, aa, b, arr[10001], i;

	while (1) {
		sum = 0;
		b = 1;
		sum += a;
		aa = a;
		while (aa != 0) {
			b = aa % 10;
			sum += b;
			aa /= 10;
		}

		if (sum <= 10000)
			arr[sum] = 1;

		a++;

		if (a > 10000)
			break;
	}

	for (i = 1; i < 10001; i++) {
		if (arr[i] != 1)
			printf("%d\n", i);
	}

	return 0;
}

//https://www.acmicpc.net/problem/1978
void BOJ1978() {
	int n, a, count = 0, flag;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		flag = 0;
		for (int j = 2; j <= a; j++) {
			if (a % j == 0)
				flag++;
		}
		if (flag == 1)
			count++;
	}

	printf("%d", count);

	return 0;
}

//https://www.acmicpc.net/problem/1316
#include <string.h>
void BOJ1316() {
	int n, j, k, cnt = 0, end;
	char arr[101];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", arr);
		k = 0;
		end = strlen(arr);
		for (j = 0; j < end - 2; j++) {
			for (k = j + 2; k < end; k++) {
				if (arr[j] == arr[k] && arr[k] != arr[k - 1])
					break;
			}

			if (arr[j] == arr[k] && arr[k] != arr[k - 1])
				break;
		}
		if (k == end || k == 0)
			cnt++;
	}

	printf("%d", cnt);

	return 0;
}

//https://www.acmicpc.net/problem/2941
#include <string.h>
void BOJ2941() {
	char arr[101];
	int count = 0;

	scanf("%s", arr);

	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] == 'c' && (arr[i + 1] == '=' || arr[i + 1] == '-'))
			i++;
		else if (arr[i] == 'd') {
			if (arr[i + 1] == '-')
				i++;
			else if (arr[i + 1] == 'z' && arr[i + 2] == '=')
				i += 2;
		}
		else if ((arr[i] == 'l' || arr[i] == 'n') && arr[i + 1] == 'j')
			i++;
		else if ((arr[i] == 's' || arr[i] == 'z') && arr[i + 1] == '=')
			i++;
		count++;
	}

	printf("%d", count);

	return 0;
}



