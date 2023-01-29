//https://www.acmicpc.net/problem/6764
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a[4], flag = 0;;
	for (int i = 0; i < 4; i++) {
		scanf("%d", &a[i]);
		if (i == 0)
			flag += 1;
		else {
			if (a[i] > a[i - 1])
				flag += 2;
			else if (a[i] < a[i - 1])
				flag -= 1;
			else
				flag += 0;
		}
	}
	if (flag == 7)
		printf("Fish Rising");
	else if (flag == -2)
		printf("Fish Diving");
	else if (flag == 1)
		printf("Fish At Constant Depth");
	else
		printf("No Fish");

	return 0;
}