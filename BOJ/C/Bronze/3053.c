//https://www.acmicpc.net/problem/3053
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
# define pi 3.141592653589793

int main() {
	int r;
	scanf("%d", &r);
	printf("%.6lf\n", r * r * pi);
	printf("%.6lf\n", 4 * r * r / 2.0);

	return 0;
}