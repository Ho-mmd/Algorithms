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

//https://www.acmicpc.net/problem/2742
void BOJ2742() {
	int a;
	scanf("%d", &a);
	for (int i = a; i > 0; i--) {
		printf("%d\n", i);
	}
	return 0;
}

//https://www.acmicpc.net/problem/10950
#include <stdlib.h>
void BOJ10950() {
	int a, flag = 0, sum = 0;
	int* arr;

	scanf("%d", &a);

	arr = (int*)malloc(sizeof(int) * a * 3);

	for (int i = 0; i < a * 2; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < a * 2; i++) {
		sum += arr[i];
		if (flag == 1) {
			printf("%d\n", sum);
			flag = 0;
			sum = 0;
		}
		else
			flag++;
	}
	free(arr);
	return 0;
}

//https://www.acmicpc.net/problem/10871
#include <stdlib.h>
void BOJ10871() {
	int a, b, flag = 0;;
	scanf("%d %d", &a, &b);

	int* arr = (int*)malloc(sizeof(int) * a * 2);
	int* arr1 = (int*)malloc(sizeof(int) * a * 2);

	for (int i = 0; i < a; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] < b) {
			arr1[flag] = arr[i];
			flag++;
		}
	}
	for (int i = 0; i < flag; i++) {
		printf("%d ", arr1[i]);
	}
	free(arr);
	free(arr1);

	return 0;
}

//https://www.acmicpc.net/problem/2884
void BOJ2884() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (b >= 45)
		printf("%d %d", a, b - 45);
	else {
		if (a == 0)
			printf("%d %d", 23, b + 15);
		else
			printf("%d %d", a - 1, b + 15);
	}

	return 0;
}

//https://www.acmicpc.net/problem/10952
void BOJ10952() {
	int a, b;
	while (1) {
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0)
			break;
		printf("%d\n", a + b);
	}
	return 0;
}


