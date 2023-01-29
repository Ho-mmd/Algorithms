//https://www.acmicpc.net/problem/11866
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a, b, t = 0, arr[1001] = { 0 };

	scanf("%d%d", &a, &b);

	printf("<");

	for (int j = 1; j < a + 1; j++) {
		for (int k = 0; k < b; k++) {
			t++;
			if (t > a)
				t = 1;
			while (arr[t] == 1) {
				t++;
				if (t > a)
					t = 1;
			}
		}
		if (j == a)
			printf("%d", t);
		else
			printf("%d, ", t);
		arr[t] = 1;
	}

	printf(">");

	return 0;
}