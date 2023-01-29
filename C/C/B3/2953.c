//https://www.acmicpc.net/problem/2953

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
	int* a = (int*)malloc(sizeof(int) * 20);
	int flag = 1, j = 1, sum = 0, temps = 0, tempf = 1;
	for (int i = 0; i < 20; i++) {
		scanf("%d", &a[i]);
		temps += a[i];
		if (j == 4) {
			if (temps > sum) {
				flag = tempf;
				sum = temps;
				tempf++;
			}
			else
				tempf++;
			temps = 0;
			j = 0;
		}
		j++;
	}
	free(a);
	printf("%d %d", flag, sum);

	return 0;
}