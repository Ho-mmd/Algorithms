//https://www.acmicpc.net/problem/12790

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int n, a, b, c, d, aa, bb, cc, dd, aaa, bbb, ccc, ddd;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &aa, &bb, &cc, &dd);
		aaa = a + aa;
		bbb = b + bb;
		ccc = c + cc;
		ddd = d + dd;
		if (aaa < 1)
			aaa = 1;
		if (bbb < 1)
			bbb = 1;
		if (ccc < 0)
			ccc = 0;
		printf("%d\n", aaa + bbb * 5 + 2 * ccc + 2 * ddd);
	}
	return 0;
}