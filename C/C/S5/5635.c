//https://www.acmicpc.net/problem/5635
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char name[16];
	int d, m, y;
}Stu;

int main(void)
{
	int n, min, max;

	scanf("%d", &n);

	Stu* arr = (Stu*)malloc(sizeof(Stu) * n);

	for (int i = 0; i < n; i++)
		scanf("%s%d%d%d", arr[i].name, &arr[i].d, &arr[i].m, &arr[i].y);

	min = 0;
	max = 0;

	for (int j = 1; j < n; j++) {
		if (arr[min].y > arr[j].y)
			min = j;
		else if (arr[min].y == arr[j].y) {
			if (arr[min].m > arr[j].m)
				min = j;
			else if (arr[min].m == arr[j].m) {
				if (arr[min].d > arr[j].d)
					min = j;
			}
		}

		if (arr[j].y > arr[max].y)
			max = j;
		else if (arr[j].y == arr[max].y) {
			if (arr[j].m > arr[max].m)
				max = j;
			else if (arr[j].m == arr[max].m) {
				if (arr[j].d > arr[max].d)
					max = j;
			}
		}
	}

	printf("%s\n%s", arr[max].name, arr[min].name);

	free(arr);

	return 0;
}