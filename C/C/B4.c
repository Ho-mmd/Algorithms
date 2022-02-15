# define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main(void) {
	
}
//int main(void) {
//	char a[31], b[31], c[70], temp0[70], temp1[70];
//	int flag = 0;
//	scanf("%s%s", &a, &b);
//	for (int i = 0; i < strlen(b); i++) {
//		if (b[i] == '1') {
//			if (flag == 0) {
//				strcpy(temp0, a);
//				for (int j = 0; j < i; j++) {
//					temp0[strlen(temp0)] = '0';
//				}
//			}	
//			else if (flag == 1) {
//				strcpy(temp1, a);
//				for (int j = 0; j < i; j++) {
//					temp1[strlen(temp1)] = '0';
//				}
//			}
//			
//			flag++;
//
//			if (flag == 2) {
//				flag = 1;
//			}
//		}
//	}
//}
//
//void plus(char* temp0, char* temp1) {
//	reverse(temp0);
//	reverse(temp1);
//
//
//}
//
//void reverse(char* temp) {
//	char tmp;
//	for (int i = 0; i < strlen(temp) / 2; i++) {
//		tmp = temp[i];
//		temp[i] = temp[strlen(temp) - 1];
//		temp[strlen(temp) - 1] = temp[i];
//	}
//}

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
void BOJ2753(){
	int a;
	scanf("%d", &a);
	if (((a % 4 == 0) & (a % 100 != 0)) || ((a % 4 == 0) & (a % 400 == 0)))
		printf("1");
	else
		printf("0");

	return 0;
}

//https://www.acmicpc.net/problem/2588
void BOJ2588(){
	char a[4], b[4];
	int sum = 0;
	int j = 1;
	scanf("%s %s", &a, &b);
	int temp = (a[0] - '0') * 100 + (a[1] - '0') * 10 + (a[2] - '0') * 1;
	for (int i = 2; i > -1; i--) {
		sum += temp * (b[i] - '0') * j;
		printf("%d\n", temp * (b[i] - '0'));
		j *= 10;
	}
	printf("%d\n", sum);

	return 0;
}

//https://www.acmicpc.net/problem/14681
void BOJ14681(){
	int a, b;
	scanf("%d %d", &a, &b);
	if (a > 0 && b > 0)
		printf("1");
	else if (a < 0 && b > 0)
		printf("2");
	else if (a < 0 && b < 0)
		printf("3");
	else
		printf("4");

	return 0;
}

//https://www.acmicpc.net/problem/1712
void BOJ1712() {
	int a, b, c;
	int temp;
	scanf("%d %d %d", &a, &b, &c);
	if (b >= c)
		printf("-1");
	else {
		temp = c - b;
		printf("%d", a / temp + 1);
	}
	return 0;
}

//https://www.acmicpc.net/problem/10039
void BOJ10039() {
	int score[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &score[i]);
		if (score[i] < 40)
			score[i] = 40;
		sum += score[i];
	}
	printf("%d", sum / 5);

	return 0;
}

//https://www.acmicpc.net/problem/5543
void BOJ5543() {
	int a[3];
	int min_a;
	int b[2];
	int min_b;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &a[i]);
		if (i == 0)
			min_a = a[i];
		else if (min_a > a[i])
			min_a = a[i];
	}
	for (int i = 0; i < 2; i++) {
		scanf("%d", &b[i]);
		if (i == 0)
			min_b = b[i];
		else if (min_b > b[i])
			min_b = b[i];
	}
	printf("%d", min_a + min_b - 50);

	return 0;
}

//https://www.acmicpc.net/problem/2525
void BOJ2525() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int min = (b + c) % 60;
	int hour = a + ((b + c) / 60);
	if (hour > 23)
		hour -= 24;
	printf("%d %d", hour, min);

	return 0;
}

//https://www.acmicpc.net/problem/10797
void BOJ10797() {
	int day;
	int car[5];
	int count = 0;
	scanf("%d", &day);
	for (int i = 0; i < 5; i++) {
		scanf("%d", &car[i]);
		if (car[i] == day)
			count++;
	}
	printf("%d", count);

	return 0;
}

//https://www.acmicpc.net/problem/2752
void BOJ2752() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b && b > c)
		printf("%d %d %d", c, b, a);
	else if (a > c && c > b)
		printf("%d %d %d", b, c, a);
	else if (b > a && a > c)
		printf("%d %d %d", c, a, b);
	else if (b > c && c > a)
		printf("%d %d %d", a, c, b);
	else if (c > a && a > b)
		printf("%d %d %d", b, a, c);
	else
		printf("%d %d %d", a, b, c);

	return 0;
}

//https://www.acmicpc.net/problem/10162
void BOJ10162() {
	int a;
	scanf("%d", &a);
	int b = 300, c = 60, d = 10;
	if (a % 10 != 0)
		printf("-1");
	else
		printf("%d %d %d", a / 300, a % 300 / 60, a % 60 / 10);

	return 0;
}

//https://www.acmicpc.net/problem/2480
void BOJ2480() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int max = a > b ? a : b;
	max = max > c ? max : c;
	if (a == b && b == c)
		printf("%d", 10000 + c * 1000);
	else if (a == b && b != c)
		printf("%d", 1000 + a * 100);
	else if (a == c && c != b)
		printf("%d", 1000 + a * 100);
	else if (b == c && c != a)
		printf("%d", 1000 + b * 100);
	else
		printf("%d", max * 100);

	return 0;
}

//https://www.acmicpc.net/problem/2420
void BOJ2420() {
	long long a, b;
	scanf("%lld %lld", &a, &b);
	long long tot = a - b;
	if (a - b < 0)
		printf("%lld", -tot);
	else
		printf("%lld", tot);

	return 0;
}

//https://www.acmicpc.net/problem/2530
void BOJ2530() {
	int a, b, c, d;
	int h, m, s;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	a *= 3600;
	b *= 60;
	int tot = (a + b + c + d);
	h = tot / 3600;
	m = tot % 3600 / 60;
	s = tot % 3600 % 60;

	while (h > 23)
		h -= 24;

	printf("%d %d %d", h, m, s);

	return 0;
}

//https://www.acmicpc.net/problem/5532
void BOJ5532() {
	int a, b, c, d, e;
	int tot = 0;
	int flag = 0;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	if ((b / d) > (c / e)) {
		tot = b / d;
		flag = 0;
	}
	else {
		tot = c / e;
		flag = 1;
	}

	if (flag == 0 && tot * d == b)
		printf("%d", a - tot);
	else if (flag == 0 && tot * d != b)
		printf("%d", a - tot - 1);
	else if (flag == 1 && tot * e != c)
		printf("%d", a - tot - 1);
	else
		printf("%d", a - tot);

	return 0;
}

//https://www.acmicpc.net/problem/10101
void BOJ10101() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a + b + c != 180)
		printf("Error");
	else if (a != b && a != c & b != c)
		printf("Scalene");
	else if ((a == b && b != c) || (a == c && c != b) || (b == c && c != a))
		printf("Isosceles");
	else
		printf("Equilateral");

	return 0;
}

//https://www.acmicpc.net/problem/5596
void BOJ5596() {
	int score[2][4];
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &score[i][j]);
			if (i == 0)
				sum1 += score[i][j];
			else
				sum2 += score[i][j];
		}
	}
	printf("%d", sum1 > sum2 ? sum1 : sum2);

	return 0;
}

//https://www.acmicpc.net/problem/15680
void BOJ15680() {
	int N;
	scanf("%d", &N);
	if (N == 0)
		printf("YONSEI");
	else
		printf("Leading the Way to the Future");

	return 0;
}

//https://www.acmicpc.net/problem/10707
void BOJ10707() {
	int a, b, c, d, e;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	int X = a * e;
	int Y = b;
	if (e > c)
		Y = b + (e - c) * d;
	printf("%d", X < Y ? X : Y);

	return 0;
}

//https://www.acmicpc.net/problem/1297
#include <math.h> 
void BOJ1297() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	double row, column;
	double r = sqrt(pow(a, 2) / (pow(b, 2) + pow(c, 2)));
	printf("%d %d", (int)(r * b), (int)(r * c));

	return 0;
}

//https://www.acmicpc.net/problem/11943
void BOJ11943() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%d", (a + d) < (b + c) ? (a + d) : (b + c));
	return 0;
}

//https://www.acmicpc.net/problem/15963
void BOJ15963() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a == b)
		printf("1");
	else
		printf("0");

	return 0;
}

//https://www.acmicpc.net/problem/10768
void BOJ10768() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a < 2 || (a == 2 && b < 18))
		printf("Before");
	else if (a == 2 && b == 18)
		printf("Special");
	else
		printf("After");

	return 0;
}

//https://www.acmicpc.net/problem/5575
void BOJ5575() {
	int time[3][6];
	int h, m, s;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			scanf("%d", &time[i][j]);
		}
	}

	for (int k = 0; k < 3; k++) {
		if (time[k][5] - time[k][2] >= 0)
			s = time[k][5] - time[k][2];
		else {
			if (time[k][4] == 0) {
				time[k][3] -= 1;
				time[k][4] += 59;
				time[k][5] += 60;
				s = time[k][5] - time[k][2];
			}
			else {
				time[k][4] -= 1;
				time[k][5] += 60;
				s = time[k][5] - time[k][2];
			}
		}
		if (time[k][4] - time[k][1] >= 0)
			m = time[k][4] - time[k][1];
		else {
			time[k][3] -= 1;
			time[k][4] += 60;
			m = time[k][4] - time[k][1];
		}
		h = time[k][3] - time[k][0];
		printf("%d %d %d\n", h, m, s);
	}
	return 0;
}

//https://www.acmicpc.net/problem/11948
void BOJ11948() {
	int score[6];
	int min1 = 100;
	int min2 = 100;
	int sum = 0;
	for (int i = 0; i < 6; i++) {
		scanf("%d", &score[i]);
		sum += score[i];
		if (i < 4) {
			if (score[i] < min1)
				min1 = score[i];
		}
		else
			if (score[i] < min2)
				min2 = score[i];
	}
	printf("%d", sum - min1 - min2);
	return 0;
}

//https://www.acmicpc.net/problem/17362
void BOJ17362() {
	int a;
	scanf("%d", &a);
	int ans = a % 8;
	if (ans == 0 || ans == 2)
		printf("2");
	else if (ans == 3 || ans == 7)
		printf("3");
	else if (ans == 4 || ans == 6)
		printf("4");
	else if (ans == 5)
		printf("5");
	else
		printf("1");

	return 0;
}

//https://www.acmicpc.net/problem/3004
void BOJ3004() {
	int a;
	scanf("%d", &a);

	switch (a) {
	case 1:
		printf("2");
		break;
	default:
		printf("%d", (a / 2 + 1) * (a - a / 2 + 1));
	}

	return 0;
}

//https://www.acmicpc.net/problem/10179
void BOJ10179() {
	int a, i = 0;
	double price[3];
	scanf("%d", &a);
	for (i = 0; i < a; i++) {
		scanf("%lf", &price[i]);
	}
	for (i = 0; i < a; i++) {
		printf("$%.2lf\n", price[i] * 0.8);
	}
	return 0;
}

//https://www.acmicpc.net/problem/17388
void BOJ17388() {
	int a[3];
	int min = 100;
	int flag = 0;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &a[i]);
		if (min > a[i]) {
			min = a[i];
			flag = i;
		}
	}
	if (a[0] + a[1] + a[2] >= 100)
		printf("OK");
	else
		switch (flag) {
		case 0:
			printf("Soongsil");
			break;
		case 1:
			printf("Korea");
			break;
		case 2:
			printf("Hanyang");
			break;
		}

	return 0;
}

//https://www.acmicpc.net/problem/16486
void BOJ16486() {
	int a, b;
	double square = 0, circle = 0;
	scanf("%d %d", &a, &b);
	square = a * 2.0;
	circle = b * 2 * 3.141592;
	printf("%.6lf", square + circle);

	return 0;
}

//https://www.acmicpc.net/problem/4299
void BOJ4299() {
	int a, b;
	int t1 = 0, t2 = 0;
	scanf("%d %d", &a, &b);
	t1 = (a + b) / 2;
	t2 = a - t1;
	if (t1 < 0 || t2 < 0 || ((a + b) % 2 != 0))
		printf("-1");
	else if (t1 > t2)
		printf("%d %d", t1, t2);
	else
		printf("%d %d", t2, t1);
	return 0;
}

//https://www.acmicpc.net/problem/15873
void BOJ15873() {
	char a[5];
	int sum = 0;
	scanf("%s", &a);
	if (a[1] == '0' && a[3] == '0')
		sum = 20;
	else if (a[1] == '0')
		sum = 10 + (int)a[2] - '0';
	else if (a[2] == '0')
		sum = (int)a[0] - '0' + 10;
	else
		sum = (int)a[0] - '0' + (int)a[1] - '0';
	printf("%d", sum);

	return 0;
}

//https://www.acmicpc.net/problem/14924
void BOJ14924() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("%d", c / (a * 2) * b);

	return 0;
}

//https://www.acmicpc.net/problem/13866
void BOJ13866() {
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	int res = (d + a) - (b + c);
	if (res < 0)
		printf("%d", -res);
	else
		printf("%d", res);

	return 0;
}

//https://www.acmicpc.net/problem/16431
#include <math.h>
void BOJ16431() {
	int a, b, c, d, e, f;
	double bessie = 0, daisy = 0;
	scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
	bessie = abs(e - c) + abs(f - d);
	daisy = sqrt(pow((e - a), 2) + pow((f - b), 2));

	if (daisy == bessie)
		printf("tie");
	else if (daisy > bessie)
		printf("daisy");
	else
		printf("bessie");

	return 0;
}

//https://www.acmicpc.net/problem/14470
void BOJ14470() {
	int a, b, c, d, e;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	if (a > 0) {
		printf("%d", (b - a) * e);
	}
	else {
		printf("%d", -a * c + d + b * e);
	}
	return 0;
}

//https://www.acmicpc.net/problem/19944
void BOJ19944() {
	int a, b;
	scanf("%d%d", &a, &b);
	if (b == 1 || b == 2)
		printf("NEWBIE!");
	else if (b <= a)
		printf("OLDBIE!");
	else
		printf("TLE!");

	return 0;
}

//https://www.acmicpc.net/problem/20499
void BOJ20499() {
	int a, b, c;
	scanf("%d/%d/%d", &a, &b, &c);
	if (a + c < b || b == 0)
		printf("hasu");
	else
		printf("gosu");

	return 0;
}

//https://www.acmicpc.net/problem/15726
void BOJ15726() {
	long long a, b, c, d, e;
	scanf("%lld%lld%lld", &a, &b, &c);
	d = (double)(a * b) / c;
	e = ((double)a / b) * c;

	printf("%lld", d > e ? d : e);

	return 0;
}

//https://www.acmicpc.net/problem/14935
void BOJ14935() {
	char a[101];
	scanf("%s", a);

	printf("FA");
	return 0;
}

//https://www.acmicpc.net/problem/15700
void BOJ15700() {
	long long a, b;
	scanf("%lld%lld", &a, &b);
	printf("%lld", a * b / 2);

	return 0;
}

//https://www.acmicpc.net/problem/11549
void BOJ11549() {
	int a[6];
	int count = 0;
	for (int i = 0; i < 6; i++) {
		scanf("%d", &a[i]);
		if (a[0] == a[i])
			count++;
	}
	printf("%d", count - 1);

	return 0;
}

//https://www.acmicpc.net/problem/16204
void BOJ16204() {
	int a, b, c;
	int oc = 0, xc = 0;
	scanf("%d%d%d", &a, &b, &c);
	oc = b > c ? c : b;
	xc = a - (b > c ? b : c);
	printf("%d", oc + xc);

	return 0;
}

//https://www.acmicpc.net/problem/13136
void BOJ13136() {
	long long a, b, c;
	long long row = 0, col = 0;;
	scanf("%lld%lld%lld", &a, &b, &c);
	if (a % c != 0)
		row = a / c + 1;
	else
		row = a / c;

	if (b % c != 0)
		col = b / c + 1;
	else
		col = b / c;

	printf("%lld", row * col);

	return 0;
}

//https://www.acmicpc.net/problem/16199
void BOJ16199() {
	int a, b, c, d, e, f;
	scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
	if (d > a) {
		if (e == b) {
			if (f >= c) {
				printf("%d\n", d - a);
			}
			else
				printf("%d\n", d - a - 1);
		}
		else if (e > b)
			printf("%d\n", d - a);
		else
			printf("%d\n", d - a - 1);
	}
	else
		printf("%d\n", 0);

	printf("%d\n", d - a + 1);
	printf("%d\n", d - a);

	return 0;
}

//https://www.acmicpc.net/problem/17009
void BOJ17009() {
	int a[6];
	int sumA = 0, sumB = 0;
	for (int i = 0; i < 6; i++) {
		scanf("%d", &a[i]);
	}
	sumA = a[0] * 3 + a[1] * 2 + a[2];
	sumB = a[3] * 3 + a[4] * 2 + a[5];

	if (sumA > sumB)
		printf("A");
	else if (sumB > sumA)
		printf("B");
	else printf("T");

	return 0;
}

//https://www.acmicpc.net/problem/19698
void BOJ19698() {
	int a, b, c, d;
	int max;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	max = (b / d) * (c / d);
	if (max > a)
		printf("%d", a);
	else
		printf("%d", max);

	return 0;
}

//https://www.acmicpc.net/problem/15921
void BOJ15921() {
	int a, b, sum = 0;
	double temp = 0;
	scanf("%d", &a);

	for (int i = 0; i < a; i++) {
		scanf("%d", &b);
		sum += b;
		temp += b * (1.0 / a);
	}

	if (a == 0 || temp == 0)
		printf("divide by zero");
	else printf("1.00");

	return 0;
}

//https://www.acmicpc.net/problem/14264
void BOJ14264() {
	int a;
	scanf("%d", &a);
	printf("%.9lf", 0.5 * pow(a, 2) * sin(60 * PI / 180));

	return 0;
}



