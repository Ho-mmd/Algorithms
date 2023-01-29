//https://www.acmicpc.net/problem/2869
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int A, B, V, day;

	scanf("%d%d%d", &A, &B, &V);

	if (V <= A)
		day = 1;
	else if (V - (A - B) < A)
		day = 2;
	else {
		if ((V - A) % (A - B) == 0)
			day = (V - A) / (A - B) + 1;
		else
			day = (V - A) / (A - B) + 2;
	}

	printf("%d", day);

	return 0;
}