# define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	
}

//https://www.acmicpc.net/problem/1008
void BOJ1008() {
	int a, b;

	scanf("%d %d", &a, &b);

	printf("%.9lf", (double)a / b);

	return 0;
}

//https://www.acmicpc.net/problem/9498
void BOJ9498() {
	int a;
	scanf("%d", &a);
	if (a >= 90)
		printf("A");
	else if (a >= 80)
		printf("B");
	else if (a >= 70)
		printf("C");
	else if (a >= 60)
		printf("D");
	else
		printf("F");

	return 0;
}

//https://www.acmicpc.net/problem/1330
void BOJ1330() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a > b)
		printf(">");
	else if (a == b)
		printf("==");
	else
		printf("<");

	return 0;
}

//https://www.acmicpc.net/problem/2753
void BOJ2753() {
	int a;
	scanf("%d", &a);
	if ((a % 4 == 0 & a % 100 != 0) || (a % 4 == 0 & a % 400 == 0))
		printf("1");
	else
		printf("0");

	return 0;
}
