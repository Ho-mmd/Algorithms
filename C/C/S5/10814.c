//https://www.acmicpc.net/problem/10814
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char name[101];
	int age;
	int sqe;
}Person;
void Quicksort(Person arr[], int start, int end) {
	int index;

	if (start < end) {
		index = Partition(arr, start, end);
		Quicksort(arr, start, index - 1);
		Quicksort(arr, index + 1, end);
	}
	else
		return;
}
int Partition(Person arr[], int start, int end) {
	Person pivot = arr[end];
	int index = start, i;
	Person tmp;

	for (i = start; i < end; i++) {
		if (arr[i].age < pivot.age) {
			tmp = arr[i];
			arr[i] = arr[index];
			arr[index] = tmp;
			index++;
		}
		else if (arr[i].age == pivot.age) {
			if (arr[i].sqe < pivot.sqe) {
				tmp = arr[i];
				arr[i] = arr[index];
				arr[index] = tmp;
				index++;
			}
		}
	}

	tmp = arr[index];
	arr[index] = arr[end];
	arr[end] = tmp;

	return index;
}

int main(void)
{
	int n;

	scanf("%d", &n);

	Person* arr = (Person*)malloc(sizeof(Person) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d %s", &arr[i].age, &arr[i].name);
		arr[i].sqe = i;
	}

	Quicksort(arr, 0, n - 1);

	for (int i = 0; i < n; i++)
		printf("%d %s\n", arr[i].age, arr[i].name);

	free(arr);

	return 0;
}