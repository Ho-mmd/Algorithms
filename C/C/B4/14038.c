//https://www.acmicpc.net/problem/14038
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int flag = 0;
	char b = 'W';
	for (int i = 0; i < 6; i += 1) {
		char a;
		scanf("%c", &a);
		if ((int)a == (int)b)
			flag += 1;
		getchar();
	}

	if (flag == 5 || flag == 6)
		printf("1");
	else if (flag == 3 || flag == 4)
		printf("2");
	else if (flag == 1 || flag == 2)
		printf("3");
	else
		printf("-1");

	return 0;
}