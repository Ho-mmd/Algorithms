//https://www.acmicpc.net/problem/11723
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int arr[21] = { 0 };
	int n;
	char sen[101];

	scanf("%d", &n);
	getchar();

	for (int i = 0; i < n; i++) {
		gets(sen);

		char* tok = strtok(sen, " ");

		if (strcmp(tok, "add") == 0) {
			tok = strtok(NULL, " ");
			if (arr[atoi(tok)] == 0)
				arr[atoi(tok)] = 1;
		}
		else if (strcmp(tok, "remove") == 0) {
			tok = strtok(NULL, " ");
			if (arr[atoi(tok)] == 1)
				arr[atoi(tok)] = 0;
		}
		else if (strcmp(sen, "check") == 0) {
			tok = strtok(NULL, " ");
			if (arr[atoi(tok)] == 1)
				printf("1\n");
			else
				printf("0\n");
		}
		else if (strcmp(sen, "toggle") == 0) {
			tok = strtok(NULL, " ");
			if (arr[atoi(tok)] == 1)
				arr[atoi(tok)] = 0;
			else
				arr[atoi(tok)] = 1;

		}
		else if (strcmp(sen, "all") == 0) {
			for (int j = 1; j < 21; j++)
				arr[j] = 1;
		}
		else if (strcmp(sen, "empty") == 0) {
			for (int j = 1; j < 21; j++)
				arr[j] = 0;
		}
	}
	return 0;
}