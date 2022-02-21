# define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void) {
	
}

//https://www.acmicpc.net/problem/2739
void BOJ2739() {
	int a;
	scanf("%d", &a);
	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", a, i, a * i);
	}
	return 0;
}

//https://www.acmicpc.net/problem/2438
void BOJ2438() {
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

//https://www.acmicpc.net/problem/2741
void BOJ2741() {
	int a;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++) {
		printf("%d\n", i);
	}
	return 0;
}

//https://www.acmicpc.net/problem/2439
void BOJ2439() {
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		for (int j = a - 1; j - i > 0; j--) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}