//https://www.acmicpc.net/problem/1004
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int InOutPlanet(int x1, int y1, int x2, int y2, int x, int y, int r) {
	if (pow(x - x1, 2) + pow(y - y1, 2) < pow(r, 2) && pow(x - x2, 2) + pow(y - y2, 2) < pow(r, 2))
		return 0;
	else if (pow(x - x1, 2) + pow(y - y1, 2) < pow(r, 2) || pow(x - x2, 2) + pow(y - y2, 2) < pow(r, 2))
		return 1;
	else
		return 0;
}

int main(void)
{
	int n1, n2, x1, y1, x2, y2;
	int x, y, r;
	int cnt;

	scanf("%d", &n1);

	while (n1--) {
		cnt = 0;
		scanf("%d%d%d%d%d", &x1, &y1, &x2, &y2, &n2);
		for (int i = 0; i < n2; i++) {
			scanf("%d%d%d", &x, &y, &r);
			cnt += InOutPlanet(x1, y1, x2, y2, x, y, r);
		}
		printf("%d\n", cnt);
	}

	return 0;
}