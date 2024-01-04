//https://www.acmicpc.net/problem/2747
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	long long b = pibo(n);
	printf("%lld", b);

	return 0;
}
int pibo(int n) {
	long long tmp1 = 0, tmp2 = 1, ans = 0;

	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else {
		for (int i = 1; i < n; i++) {
			ans = tmp1 + tmp2;
			tmp1 = tmp2;
			tmp2 = ans;
		}
	}
	return ans;
}