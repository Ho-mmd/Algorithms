#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
	if (*(char*)a - *(char*)b > 0)
		return 1;
	else if (*(char*)a == *(char*)b)
		return 0;
	else return -1;
}

int main(void)
{
	int L, C;
	char arr[16];

	scanf("%d%d", &L, &C);
	
	for (int i = 0; i < C; i++) {
		getchar();
		scanf("%c", &arr[i]);
	}
			
	/*for (int i = 0; i < C; i++)
		printf("%c", arr[i]);*/

	qsort(arr, C, sizeof(char), compare);


	for (int k = 0; k <= C - L; k++) {
		for (int i = k; i < k + L - 1; i++)
			printf("%c", arr[i]);
		printf("%c\n", arr[k + L - 1]);
	}
	

	return 0;
}