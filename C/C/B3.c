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

//https://www.acmicpc.net/problem/11021
void BOJ11021() {
	int a, flag = 1;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		int b, c;
		scanf("%d %d", &b, &c);
		printf("Case #%d: %d\n", flag, b + c);
		flag++;
	}
	return 0;
}

//https://www.acmicpc.net/problem/11022
void BOJ11022() {
	int a, flag = 1;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		int b, c;
		scanf("%d %d", &b, &c);
		printf("Case #%d: %d + %d = %d\n", flag, b, c, b + c);
		flag++;
	}
	return 0;
}

//https://www.acmicpc.net/problem/10818
void BOJ10818() {
	int a;
	int big, small;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		int c;
		scanf("%d", &c);
		if (i == 0) {
			big = c;
			small = c;
		}
		else {
			big = big > c ? big : c;
			small = small < c ? small : c;
		}
	}
	printf("%d %d", small, big);
	return 0;
}

//https://www.acmicpc.net/problem/10951
void BOJ10951() {
	int a, b;

	while (scanf("%d %d", &a, &b) != EOF) {
		printf("%d\n", a + b);
	}

	return 0;
}

//https://www.acmicpc.net/problem/10817
void BOJ10817() {
	int a[3];
	for (int i = 0; i < 3; i++) {
		scanf("%d", &a[i]);
	}
	if (a[0] >= a[1] && a[1] >= a[2])
		printf("%d", a[1]);
	else if (a[2] >= a[1] && a[1] >= a[0])
		printf("%d", a[1]);
	else if (a[0] >= a[2] && a[2] >= a[1])
		printf("%d", a[2]);
	else if (a[1] >= a[2] && a[2] >= a[0])
		printf("%d", a[2]);
	else
		printf("%d", a[0]);

	return 0;
}

//https://www.acmicpc.net/problem/10872
void BOJ10872() {
	int a, fac = 1;
	scanf("%d", &a);
	for (int i = a; i > 0; i--) {
		fac *= i;
	}
	printf("%d", fac);

	return 0;
}

//https://www.acmicpc.net/problem/2440
void BOJ2440() {
	int a;
	scanf("%d", &a);
	for (int i = a; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

//https://www.acmicpc.net/problem/2441
void BOJ2441() {
	int a;
	scanf("%d", &a);
	for (int i = a; i > 0; i--) {
		for (int j = i; j < a; j++) {
			printf(" ");
		}
		for (int k = i; k > 0; k--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

//https://www.acmicpc.net/problem/10250
void BOJ10250() {
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		int H, W, N;
		scanf("%d %d %d", &H, &W, &N);
		if (N % H == 0) {
			printf("%d", H);
			if (N / H >= 10)
				printf("%d\n", N / H);
			else
				printf("0%d\n", N / H);
		}
		else {
			printf("%d", N % H);
			if (N / H + 1 >= 10)
				printf("%d\n", N / H + 1);
			else
				printf("0%d\n", N / H + 1);
		}
	}
	return 0;
}

//https://www.acmicpc.net/problem/11718
void BOJ11718() {
	char a[101];
	while (gets(a)) {
		if (a[0] == '/0')
			break;
		else
			puts(a);
	}
	return 0;
}

//https://www.acmicpc.net/problem/1085
void BOJ1085() {
	int a, b, c, d, xsh = 0, ysh = 0;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	xsh = c - a;
	ysh = d - b;
	xsh = xsh < a ? xsh : a;
	ysh = ysh < b ? ysh : b;
	if (xsh > ysh)
		printf("%d", ysh);
	else
		printf("%d", xsh);

	return 0;
}

//https://www.acmicpc.net/problem/4153
void BOJ4153() {
	while (1) {
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0)
			break;
		else if (pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(c, 2) == pow(b, 2) + pow(a, 2))
			printf("right\n");
		else
			printf("wrong\n");
	}
	return 0;
}

//https://www.acmicpc.net/problem/2442
void BOJ2442() {
	int n, flag = 1;;
	scanf("%d", &n);

	for (int i = n; i > 0; i--) {
		for (int j = i - 1; j > 0; j--) {
			printf(" ");
		}
		for (int k = 0; k < flag; k++) {
			printf("*");
		}
		flag += 2;
		printf("\n");
	}
	return 0;
}

//https://www.acmicpc.net/problem/2446
void BOJ2446() {
	int n, flag = 1;;
	scanf("%d", &n);

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int k = 2 * (n - i) - 1; k > 0; k--) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = n; i > 0; i--) {
		for (int j = i - 1; j > 0; j--) {
			printf(" ");
		}
		for (int k = 0; k < flag; k++) {
			printf("*");
		}
		flag += 2;
		printf("\n");
	}

	return 0;
}

//https://www.acmicpc.net/problem/2747
void BOJ2747() {
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

//https://www.acmicpc.net/problem/3009
void BOJ3009() {
	int a[6];
	for (int i = 0; i < 6; i++) {
		scanf("%d", &a[i]);
	}
	if (a[0] == a[2])
		printf("%d ", a[4]);
	else if (a[0] == a[4])
		printf("%d ", a[2]);
	else
		printf("%d ", a[0]);
	if (a[1] == a[3])
		printf("%d", a[5]);
	else if (a[1] == a[5])
		printf("%d", a[3]);
	else
		printf("%d", a[1]);

	return 0;
}

//https://www.acmicpc.net/problem/3053
# define pi 3.141592653589793
void BOJ3053() {
	int r;
	scanf("%d", &r);
	printf("%.6lf\n", r * r * pi);
	printf("%.6lf\n", 4 * r * r / 2.0);

	return 0;
}

//https://www.acmicpc.net/problem/2523
void BOJ2523() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = n - 1; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

//https://www.acmicpc.net/problem/2445
void BOJ2445() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		for (int k = 2 * (n - i) - 2; k > 0; k--) {
			printf(" ");
		}
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = n - 1; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			printf("*");
		}
		for (int k = 2 * (n - i); k > 0; k--) {
			printf(" ");
		}
		for (int j = i; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

//https://www.acmicpc.net/problem/2444
void BOJ2444() {
	int n, flag = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = n - i - 1; j > 0; j--) {
			printf(" ");
		}
		for (int k = 0; k < flag; k++) {
			printf("*");
		}
		flag += 2;
		printf("\n");
	}

	flag -= 4;

	for (int i = n - 1; i > 0; i--) {
		for (int j = 0; n - i > j; j++) {
			printf(" ");
		}
		for (int k = flag; k > 0; k--) {
			printf("*");
		}
		flag -= 2;
		printf("\n");
	}

	return 0;
}

