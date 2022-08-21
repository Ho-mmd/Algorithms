#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int ZeroFlag = 0, OneFlag = 0;

int fibo(int n) {
	if (n == 0) {
		ZeroFlag++;
		return 0;
	}
	else if (n == 1) {
		OneFlag++;
		return 1;
	}
	else
		return fibo(n - 1) + fibo(n - 2);
}

int main() {
	int a, b;

	scanf("%d", &a);

	for (int i = 0; i < a; i++) {
		scanf("%d", &b);
		fibo(b);
		printf("%d %d\n", ZeroFlag, OneFlag);
		ZeroFlag = 0;
		OneFlag = 0;
	}

	return 0;
}