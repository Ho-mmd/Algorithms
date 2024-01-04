//https://www.acmicpc.net/problem/14173
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a[8];
	int maxx, minx, maxy, miny, sq;
	for (int i = 0; i < 8; i++) {
		scanf("%d", &a[i]);
	}
	maxx = a[2] > a[6] ? a[2] : a[6];
	minx = a[0] < a[4] ? a[0] : a[4];
	maxy = a[3] > a[7] ? a[3] : a[7];
	miny = a[1] < a[5] ? a[1] : a[5];
	sq = maxx - minx > maxy - miny ? maxx - minx : maxy - miny;
	printf("%d", sq * sq);

	return 0;
}