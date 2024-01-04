//https://www.acmicpc.net/problem/2941
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void)
{
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