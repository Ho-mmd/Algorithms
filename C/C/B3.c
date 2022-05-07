# define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	
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

//https://www.acmicpc.net/problem/2443
void BOJ2443() {
	int n;
	scanf("%d", &n);
	int flag = 2 * n - 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int k = 0; k < flag; k++) {
			printf("*");
		}
		flag -= 2;
		printf("\n");
	}

	return 0;
}

//https://www.acmicpc.net/problem/2163
void BOJ2163() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a * b - 1);

	return 0;
}

//https://www.acmicpc.net/problem/2490
void BOJ2490() {
	for (int i = 0; i < 3; i++) {
		int flag = 0;
		for (int j = 0; j < 4; j++) {
			int a[4];
			scanf("%d", &a[i]);
			if (a[i] == 0)
				flag++;
		}
		if (flag == 1)
			printf("A\n");
		else if (flag == 2)
			printf("B\n");
		else if (flag == 3)
			printf("C\n");
		else if (flag == 4)
			printf("D\n");
		else
			printf("E\n");
	}
	return 0;
}

//https://www.acmicpc.net/problem/2455
void BOJ2455() {
	int max = 0, temp1 = 0;
	for (int i = 0; i < 4; i++) {
		int a, b, temp2 = 0;
		scanf("%d %d", &a, &b);
		if (i == 0) {
			max = b;
			temp1 = b;
		}
		else {
			temp2 = b - a;
			temp1 += temp2;
		}
		if (temp1 > max)
			max = temp1;
	}
	printf("%d", max);

	return 0;
}

//https://www.acmicpc.net/problem/1009
void BOJ1009() {
	//제곱 시 끝자리 규칙을 코드로 표현해 풀면 더 간단했음...
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int a, b, temp1 = 0, temp2 = 0;
		scanf("%d %d", &a, &b);
		temp1 = a % 10;
		switch (temp1) {
		case 0:
			printf("10");
			break;
		case 1:
			printf("1");
			break;
		case 2:
			temp2 = b % 4;
			if (temp2 == 1)
				printf("2");
			else if (temp2 == 2)
				printf("4");
			else if (temp2 == 3)
				printf("8");
			else
				printf("6");
			break;
		case 3:
			temp2 = b % 4;
			if (temp2 == 1)
				printf("3");
			else if (temp2 == 2)
				printf("9");
			else if (temp2 == 3)
				printf("7");
			else
				printf("1");
			break;
		case 4:
			temp2 = b % 2;
			if (temp2 == 1)
				printf("4");
			else
				printf("6");
			break;
		case 5:
			printf("5");
			break;
		case 6:
			printf("6");
			break;
		case 7:
			temp2 = b % 4;
			if (temp2 == 1)
				printf("7");
			else if (temp2 == 2)
				printf("9");
			else if (temp2 == 3)
				printf("3");
			else
				printf("1");
			break;
		case 8:
			temp2 = b % 4;
			if (temp2 == 1)
				printf("8");
			else if (temp2 == 2)
				printf("4");
			else if (temp2 == 3)
				printf("2");
			else
				printf("6");
			break;
		case 9:
			temp2 = b % 2;
			if (temp2 == 1)
				printf("9");
			else
				printf("1");
			break;
		}
		printf("\n");
	}
	return 0;
}

//https://www.acmicpc.net/problem/2522
void BOJ2522() {
	int n;
	scanf("%d", &n);
	for (int i = n; i > 0; i--) {
		for (int j = i - 1; j > 0; j--) {
			printf(" ");
		}
		for (int k = i; k <= n; k++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j <= i; j++) {
			printf(" ");
		}
		for (int k = n - 1; k > i; k--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

//https://www.acmicpc.net/problem/5086
void BOJ5086() {
	while (1) {
		int a, b;
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0)
			return 0;
		else if (a > b && a % b == 0) {
			printf("multiple\n");
		}
		else if (a < b && b % a == 0) {
			printf("factor\n");
		}
		else
			printf("neither\n");
	}
	return 0;
}

//https://www.acmicpc.net/problem/2576
#include <stdlib.h>
void BOJ2576() {
	int* a, sum = 0, min = 100;
	a = (int*)malloc(sizeof(int) * 7);
	for (int i = 0; i < 7; i++) {
		scanf("%d", &a[i]);

		if (a[i] % 2 == 1) {
			if (min > a[i])
				min = a[i];
			sum += a[i];
		}
	}
	free(a);
	if (sum == 0)
		printf("-1");
	else
		printf("%d\n%d", sum, min);
	return 0;
}

//https://www.acmicpc.net/problem/10991
void BOJ10991() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int k = n - i; k > 1; k--) {
			printf(" ");
		}
		for (int j = 0; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

//https://www.acmicpc.net/problem/10991
void BOJ10992() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		if (i == n - 1) {
			for (int a = 0; a < 2 * n - 1; a++) {
				printf("*");
			}
		}
		else {
			for (int j = n - i - 1; j > 0; j--) {
				printf(" ");
			}
			printf("*");
			if (i == 0)
				printf("\n");
			else {
				for (int k = 0; k < 2 * i - 1; k++) {
					printf(" ");
				}
				printf("*\n");
			}
		}
	}
}

//https://www.acmicpc.net/problem/10886
void BOJ10886() {
	int n, a, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		if (a == 1)
			sum++;
	}
	if (sum > n - sum)
		printf("Junhee is cute!");
	else
		printf("Junhee is not cute!");

	return 0;
}

//https://www.acmicpc.net/problem/1212
#include <string.h>
void BOJ1212() {
	char a[333445];
	int len, temp;
	scanf("%s", a);
	len = strlen(a);
	for (int i = 0; i < len; i++) {
		temp = a[i] - '0';
		if (i == 0 && temp <= 3) {
			if (a[i] == '0')
				printf("0");
			else if (a[i] == '1')
				printf("1");
			else if (a[i] == '2')
				printf("10");
			else
				printf("11");
		}
		else {
			printf("%d", temp / 2 / 2);
			printf("%d", temp / 2 % 2);
			printf("%d", temp % 2 % 2);
		}
	}
	return 0;
}

//https://www.acmicpc.net/problem/2953
#include <stdlib.h>
void BOJ2953() {
	int* a = (int*)malloc(sizeof(int) * 20);
	int flag = 1, j = 1, sum = 0, temps = 0, tempf = 1;
	for (int i = 0; i < 20; i++) {
		scanf("%d", &a[i]);
		temps += a[i];
		if (j == 4) {
			if (temps > sum) {
				flag = tempf;
				sum = temps;
				tempf++;
			}
			else
				tempf++;
			temps = 0;
			j = 0;
		}
		j++;
	}
	free(a);
	printf("%d %d", flag, sum);

	return 0;
}

//https://www.acmicpc.net/problem/2953
#include <stdlib.h>
void BOJ5565() {
	int* a = (int*)malloc(sizeof(int) * 10), sum = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
		if (i != 0)
			sum += a[i];
	}
	printf("%d", a[0] - sum);
	free(a);
	return 0;
}

//https://www.acmicpc.net/problem/2501
void BOJ2501() {
	int a, b, flag = 0;
	scanf("%d %d", &a, &b);
	for (int i = 1; i <= a; i++) {
		if (a % i == 0)
			flag++;

		if (a % i == 0 && flag == b) {
			printf("%d", i);
			return 0;
		}
	}
	if (b > flag)
		printf("0");
	return 0;
}

//https://www.acmicpc.net/problem/2875
void BOJ2875() {
	//내 답안
	/*int N, M, K, Ntmp, Ntemp, a, b, c;
	scanf("%d %d %d", &N, &M, &K);
	Ntmp = N / 2;
	Ntemp = N % 2;
	if (K == 0)
		printf("%d", M > Ntmp ? Ntmp : M);
	else if (Ntmp > M) {
		c = 2 * (Ntmp - M) - K;
		if (c >= 0)
			printf("%d", M);
		else {
			c *= -1;
			a = c / 3;
			b = c % 3;
			M -= a;
			if (b == 1 && Ntemp == 1 || b == 0)
				printf("%d", M);
			else
				printf("%d", M - 1);
		}
	}
	else {
		c = M - Ntmp - K;
		if (c >= 0)
			printf("%d", Ntmp);
		else {
			c *= -1;
			a = c / 3;
			b = c % 3;
			Ntmp -= a;
			if (b == 1 && Ntemp == 1 || b == 0)
				printf("%d", Ntmp);
			else
				printf("%d", Ntmp - 1);
		}
	}
	return 0;*/

	//정석답안
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	while (c) {
		if (a >= 2 * b)
			a--;
		else
			b--;
		c--;
	}
	printf("%d", a > b ? b : a);

	return 0;
}

//https://www.acmicpc.net/problem/10824
void BOJ10824() {
	long long a, b, c, d, temp, cnt = 1, i;
	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
	temp = b;
	while (temp / 10 != 0) {
		temp /= 10;
		cnt++;
	}
	for (i = 0; i < cnt; i++) {
		a *= 10;
	}
	a += b;
	cnt = 1;
	temp = d;
	while (temp / 10 != 0) {
		temp /= 10;
		cnt++;
	}
	for (i = 0; i < cnt; i++) {
		c *= 10;
	}
	c += d;

	printf("%lld", a + c);

	return 0;
}

//https://www.acmicpc.net/problem/2010
void BOJ2010() {
	int n, a, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		sum += a;
	}
	printf("%d", sum - n + 1);

	return 0;
}

//https://www.acmicpc.net/problem/4101
void BOJ4101() {
	int a, b;
	while (1) {
		scanf("%d %d", &a, &b);

		if (a == 0 && b == 0)
			return 0;
		else if (a <= b)
			printf("No\n");
		else
			printf("Yes\n");
	}
	return 0;
}

//https://www.acmicpc.net/problem/1547
void BOJ1547() {
	int n, a, b, flag = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		if (flag == a)
			flag = b;
		else if (flag == b)
			flag = a;
	}
	printf("%d", flag);

	return 0;
}

//https://www.acmicpc.net/problem/10833
void BOJ10833() {
	int n, a, b, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		sum += b % a;
	}
	printf("%d", sum);

	return 0;
}

//https://www.acmicpc.net/problem/2506
#include <stdlib.h>
void BOJ2506() {
	int n, i, cnt = 0, sum = 0;

	scanf("%d", &n);

	int* num = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++) {
		scanf("%d", &num[i]);

		if (num[i] == 1) {
			sum++;
			if (num[i - 1] == 1) {
				cnt++;
				sum += cnt;
			}
			else
				cnt = 0;
		}
	}
	free(num);
	printf("%d", sum);

	return 0;
}

//https://www.acmicpc.net/problem/2460
void BOJ2460() {
	int minus, plus, max = 0, sum = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d %d", &minus, &plus);
		sum -= minus;
		sum += plus;

		if (sum > max)
			max = sum;
	}

	printf("%d", max);

	return 0;
}

//https://www.acmicpc.net/problem/5063
void BOJ5063() {
	int n, r, c, e;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &r, &c, &e);
		if (r + e < c)
			printf("advertise\n");
		else if (r + e == c)
			printf("does not matter\n");
		else
			printf("do not advertise\n");
	}

	return 0;
}

//https://www.acmicpc.net/problem/10990
void BOJ10990() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			for (int j = i; j < n - 1; j++)
				printf(" ");
			printf("*");
			printf("\n");
		}
		else {
			for (int j = i; j < n - 1; j++)
				printf(" ");
			printf("*");
			for (int k = 0; k < 2 * i - 1; k++)
				printf(" ");
			printf("*");
			printf("\n");
		}
	}

	return 0;
}

//https://www.acmicpc.net/problem/2935
void BOJ2935() {
	char a[101], b[101], c[201] = { '0' }, d;

	scanf("%s %c %s", a, &d, b);
	if (d == '*') {
		c[0] = '1';
		for (int i = 1; i < strlen(a) + strlen(b) - 1; i++)
			c[i] = '0';
		c[strlen(a) + strlen(b)] = '\0';
	}
	else if (d == '+') {
		if (strlen(a) > strlen(b)) {
			for (int i = 0; i < strlen(a); i++)
				c[i] = a[i];
			c[strlen(a) - strlen(b)] = '1';
			c[strlen(a)] = '\0';
		}
		else if (strlen(a) < strlen(b)) {
			for (int i = 0; i < strlen(b); i++)
				c[i] = b[i];
			c[strlen(b) - strlen(a)] = '1';
			c[strlen(b)] = '\0';
		}
		else {
			c[0] = '2';
			for (int i = 1; i < strlen(a); i++)
				c[i] = a[i];
		}
	}
	printf("%s", c);

	return 0;
}

//https://www.acmicpc.net/problem/2476
void BOJ2476() {
	int a, b, c, d, max = 0, tmp;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d%d%d", &b, &c, &d);
		if (b == c && c == d)
			tmp = 10000 + 1000 * b;
		else if (b == c)
			tmp = 1000 + 100 * b;
		else if (b == d)
			tmp = 1000 + 100 * b;
		else if (c == d)
			tmp = 1000 + 100 * c;
		else {
			if (b > c && b > d)
				tmp = b * 100;
			else if (c > b && c > d)
				tmp = c * 100;
			else if (d > c && d > b)
				tmp = d * 100;
		}

		if (tmp > max)
			max = tmp;
	}
	printf("%d", max);

	return 0;
}

//https://www.acmicpc.net/problem/9085
void BOJ9085() {
	int n, k, num, sum;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &k);
		sum = 0;
		for (int j = 0; j < k; j++) {
			scanf("%d", &num);
			sum += num;
		}
		printf("%d\n", sum);
	}
	return 0;
}

//https://www.acmicpc.net/problem/15953
void BOJ15953() {
	int n, a, b;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		if (a == 1)
			a = 5000000;
		else if (2 <= a && a <= 3)
			a = 3000000;
		else if (4 <= a && a <= 6)
			a = 2000000;
		else if (7 <= a && a <= 10)
			a = 500000;
		else if (11 <= a && a <= 15)
			a = 300000;
		else if (16 <= a && a <= 21)
			a = 100000;
		else
			a = 0;
		if (b == 1)
			b = 5120000;
		else if (2 <= b && b <= 3)
			b = 2560000;
		else if (4 <= b && b <= 7)
			b = 1280000;
		else if (8 <= b && b <= 15)
			b = 640000;
		else if (16 <= b && b <= 31)
			b = 320000;
		else
			b = 0;
		printf("%d\n", a + b);
	}
	return 0;
}

//https://www.acmicpc.net/problem/3460
void BOJ3460() {
	int a, n, b[100] = { 0 }, c;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d", &n);
		c = 0;
		while (n >= 2) {
			b[c] = n % 2;
			n /= 2;
			c++;
		}
		b[c] = n;

		for (int i = 0; i <= c; i++) {
			if (b[i] == 1)
				printf("%d ", i);
		}
		printf("\n");
	}

	return 0;
}

//https://www.acmicpc.net/problem/2566
void BOJ2566() {
	int a[9][9], max = 0, row, col;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &a[i][j]);
			if (a[i][j] > max) {
				max = a[i][j];
				row = i + 1;
				col = j + 1;
			}
		}
	}
	printf("%d\n%d %d", max, row, col);

	return 0;
}

//https://www.acmicpc.net/problem/9316
void BOJ9316() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		printf("Hello World, Judge %d!\n", i + 1);

	return 0;
}

//https://www.acmicpc.net/problem/2965
void BOJ2965() {
	int a, b, c, cnt = 0;
	scanf("%d%d%d", &a, &b, &c);
	while (1) {
		if (a + 1 == b && b + 1 == c)
			break;

		if (c - b >= b - a) {
			a = b;
			b++;
		}
		else if (b - a > c - b) {
			c = b;
			b--;
		}
		cnt++;
	}
	printf("%d", cnt);
	return 0; 
}

//https://www.acmicpc.net/problem/1267
void BOJ1267() {
	int n, a, m = 0, y = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		y += (a / 30 + 1) * 10;
		m += (a / 60 + 1) * 15;
	}
	if (y < m)
		printf("Y %d", y);
	else if (y == m)
		printf("Y M %d", y);
	else
		printf("M %d", m);

	return 0;
}

//https://www.acmicpc.net/problem/10103
void BOJ10103() {
	int a = 100, b = 100, n, aa, bb;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &aa, &bb);
		if (aa > bb)
			b -= aa;
		else if (aa < bb)
			a -= bb;
	}
	printf("%d\n%d", a, b);

	return 0;
}

//https://www.acmicpc.net/problem/10995
void BOJ10995() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i % 2 == 0) {
				printf("* ");
			}
			else {
				printf(" *");
			}
		}
		printf("\n");
	}
	return 0;
}

//https://www.acmicpc.net/problem/9325
void BOJ9325() {
	int n, pr, cnt, a, b;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &pr);
		scanf("%d", &cnt);
		for (int j = 0; j < cnt; j++) {
			scanf("%d%d", &a, &b);
			pr += a * b;
		}
		printf("%d\n", pr);
	}
	return 0;
}

//https://www.acmicpc.net/problem/5717
void BOJ5717() {
	int a, b;
	while (1) {
		scanf("%d%d", &a, &b);
		if (a == 0 && b == 0)
			break;
		printf("%d\n", a + b);
	}
	return 0;
}

//https://www.acmicpc.net/problem/10214
void BOJ10214() {
	int n, a, b, aa, bb;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		aa = 0;
		bb = 0;
		for (int j = 0; j < 9; j++) {
			scanf("%d%d", &a, &b);
			aa += a;
			bb += b;
		}
		if (aa > bb)
			printf("Yonsei\n");
		else if (bb > aa)
			printf("Korea\n");
		else
			printf("Draw\n");
	}
	return 0;
}

//https://www.acmicpc.net/problem/2720
void BOJ2720() {
	int n, ch;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &ch);
		printf("%d ", ch / 25);
		printf("%d ", (ch % 25) / 10);
		printf("%d ", (ch % 25 % 10) / 5);
		printf("%d\n", ch % 5);
	}
	return 0;
}

//https://www.acmicpc.net/problem/10984
void BOJ10984() {
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

//https://www.acmicpc.net/problem/1964
void BOJ1964() {
	long long n, tot = 5, step = 7;
	scanf("%lld", &n);
	for (int i = 1; i < n; i++) {
		tot += step;
		step += 3;
	}
	printf("%lld", tot % 45678);
	return 0;
}

//https://www.acmicpc.net/problem/9610
void BOJ9610() {
	int n, a = 0, b = 0, c = 0, d = 0, e = 0, x, y;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &x, &y);
		if (x == 0 || y == 0)
			e++;
		else if (x > 0 && y > 0)
			a++;
		else if (x < 0 && y > 0)
			b++;
		else if (x < 0 && y < 0)
			c++;
		else if (x > 0 && y < 0)
			d++;
	}
	printf("Q1: %d\nQ2: %d\nQ3: %d\nQ4: %d\nAXIS: %d", a, b, c, d, e);

	return 0;
}

//https://www.acmicpc.net/problem/10569
void BOJ10569() {
	int a, b, n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &a, &b);
		printf("%d\n", b - a + 2);
	}
	return 0;
}

//https://www.acmicpc.net/problem/4504
void BOJ4504() {
	int n, a;
	scanf("%d", &n);
	while (1) {
		scanf("%d", &a);
		if (a == 0)
			break;

		if (a % n == 0)
			printf("%d is a multiple of %d.\n", a, n);
		else
			printf("%d is NOT a multiple of %d.\n", a, n);
	}
	return 0;
}

//https://www.acmicpc.net/problem/3058
void BOJ3058() {
	int a, b, sum, min;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		sum = 0;
		for (int j = 0; j < 7; j++) {
			scanf("%d", &b);
			if (b % 2 == 0) {
				if (sum == 0) {
					min = b;
				}
				else if (min > b)
					min = b;
				sum += b;
			}
		}
		printf("%d %d\n", sum, min);
	}

	return 0;
}

//https://www.acmicpc.net/problem/2355
void BOJ2355() {
	long long a, b, tmp;
	scanf("%lld%lld", &a, &b);
	if (b > a) {
		tmp = a;
		a = b;
		b = tmp;
	}

	if ((a - b) % 2 == 0)
		printf("%lld", (a + b - 1) * (a - b) / 2 + a);
	else
		printf("%lld", (a + b) * ((a - b) / 2 + 1));

	return 0;
}

//https://www.acmicpc.net/problem/3034
void BOJ3034() {
	int n, a, b, c, d;
	scanf("%d%d%d", &n, &b, &c);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		if (b * b + c * c >= a * a)
			printf("DA\n");
		else
			printf("NE\n");
	}
	return 0;
}

//https://www.acmicpc.net/problem/9295
void BOJ9295() {
	int n, a, b;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &a, &b);
		printf("Case %d: %d\n", i + 1, a + b);
	}

	return 0;
}

//https://www.acmicpc.net/problem/10178
void BOJ10178() {
	int n, a, b;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &a, &b);
		printf("You get %d piece(s) and your dad gets %d piece(s).\n", a / b, a % b);
	}
	return 0;
}

//https://www.acmicpc.net/problem/12790
void BOJ12790() {
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

//https://www.acmicpc.net/problem/2921
void BOJ2921() {
	int n, sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= i; j++) {
			sum += i + j;
		}
	}
	printf("%d", sum);
	return 0;
}


//https://www.acmicpc.net/problem/2959
void BOJ2959() {
	int a[4], i, j, tmp, min;

	for (i = 0; i < 4; i++)
		scanf("%d", &a[i]);

	for (i = 0; i < 4; i++) {
		min = i;
		for (j = i + 1; j < 4; j++) {
			if (a[min] > a[j]) {
				min = j;
			}
		}
		tmp = a[i];
		a[i] = a[min];
		a[min] = tmp;
	}

	printf("%d", a[0] * a[2]);

	return 0;
}


//https://www.acmicpc.net/problem/10539
void BOJ10539() {
	int n, a, pre = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		printf("%d ", a * (i + 1) - pre);
		pre += a * (i + 1) - pre;
	}
	return 0;
}

//https://www.acmicpc.net/problem/2903
void BOJ2903() {
	int n, tot = 2;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		tot = 2 * tot - 1;
	}
	printf("%d", tot * tot);

	return 0;
}

//https://www.acmicpc.net/problem/13752
void BOJ13752() {
	int n, a;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		for (int j = 0; j < a; j++)
			printf("=");
		printf("\n");
	}

	return 0;
}

#include <math.h>
//https://www.acmicpc.net/problem/11966
void BOJ11966() {
	int n;
	double a;

	scanf("%d", &n);

	a = log2(n);

	if (a - (int)a == 0)
		printf("1");
	else
		printf("0");

	return 0;
}
