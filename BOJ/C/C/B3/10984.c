//https://www.acmicpc.net/problem/10984

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b, c, tot;
	double sum, d;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d", &b);
		sum = 0;
		tot = 0;
		for (int j = 0; j < b; j++) {
			scanf("%d %lf", &c, &d);
			sum += c * d;
			tot += c;
			getchar();
		}
		if (sum == 0)
			printf("%d %.1lf\n", tot, sum);
		else
			printf("%d %.1lf\n", tot, sum / tot);
	}
	return 0;
}