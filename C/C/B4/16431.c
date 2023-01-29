//https://www.acmicpc.net/problem/16431
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c, d, e, f;
	double bessie = 0, daisy = 0;
	scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
	bessie = abs(e - c) + abs(f - d);
	daisy = sqrt(pow((e - a), 2) + pow((f - b), 2));

	if (daisy == bessie)
		printf("tie");
	else if (daisy > bessie)
		printf("daisy");
	else
		printf("bessie");

	return 0;
}