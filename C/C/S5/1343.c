//https://www.acmicpc.net/problem/1343
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void)
{
	char arr[51] = { 0 };
	int cnt, flag;

	scanf("%s", arr);


	for (int i = 0; i < strlen(arr);) {
		cnt = 0;
		while (arr[i] == 'X') {
			cnt++;
			i++;
		}
		if (cnt % 4 == 0) {
			for (int k = i - cnt; k < i; k++)
				arr[k] = 'A';
		}
		else if (cnt % 4 == 2) {
			flag = 0;
			for (int k = i - cnt; k < i; k++) {
				if (flag < cnt - 2)
					arr[k] = 'A';
				else
					arr[k] = 'B';

				flag++;
			}
		}
		else if (cnt % 2 == 0) {
			for (int k = i - cnt; k < i; k++)
				arr[k] = 'B';
		}
		else
		{
			flag = 100;
			printf("-1");
			break;
		}
		while (arr[i] == '.') {
			i++;
		}
	}

	if (flag != 100)
		printf("%s", arr);

	return 0;
}