//https://www.acmicpc.net/problem/7785
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char name[100];
}InN;
int compare4(const void* a, const void* b) {

	if (strcmp(a, b) > 0)
		return -1;
	else if (strcmp(a, b) < 0)
		return 1;
	else
		return 0;

}

int main(void)
{
	int n, cnt;
	char data[12];

	scanf("%d", &n);

	InN* arr = (InN*)malloc(sizeof(InN) * n);

	getchar();

	for (int i = 0; i < n; i++) {
		gets(data);

		char* tok = strtok(data, " ");
		strcpy(arr[i].name, tok);
	}

	qsort(arr, n, 100, compare4);

	for (int j = 0; j < n - 1; j++) {
		cnt = 1;

		while (strcmp(arr[j].name, arr[j + 1].name) == 0) {
			cnt++;
			j++;
		}

		if (cnt % 2 != 0)
			printf("%s\n", arr[j].name);
	}

	if (strcmp(arr[n - 2].name, arr[n - 1].name) != 0)
		printf("%s\n", arr[n - 1].name);

	free(arr);

	return 0;
}