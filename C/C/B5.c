#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	//15733
}

//https://www.acmicpc.net/problem/2557
void BOJ2557(void) {
	printf("Hello World!");
	return 0;
}

//https://www.acmicpc.net/problem/1000
void BOJ1000(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a + b);
	return 0;
}

//https://www.acmicpc.net/problem/1001
void BOJ1001(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a - b);
	return 0;
}

//https://www.acmicpc.net/problem/10718
void BOJ10718(void) {
	printf("강한친구 대한육군\n");
	printf("강한친구 대한육군\n");
	return 0;
}

//https://www.acmicpc.net/problem/10998
void BOJ10998(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a * b);
	return 0;
}

//https://www.acmicpc.net/problem/10869
void BOJ10869(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);
	return 0;
}

//https://www.acmicpc.net/problem/10430
void BOJ10430(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", (a + b) % c);
	printf("%d\n", ((a % c) + (b % c)) % c);
	printf("%d\n", (a * b) % c);
	printf("%d\n", ((a % c) * (b % c)) % c);
	return 0;
}

//https://www.acmicpc.net/problem/10172
void BOJ10172(void) {
	printf("|\\_/|\n");
	printf("|q p|   /}\n");
	printf("( 0 )\"\"\"\\\n");
	printf("|\"^\"`    |\n");
	printf("||_/=\\\\__|");
	return 0;
}

//https://www.acmicpc.net/problem/10171
void BOJ10171(void) {
	printf("\\    /\\\n");
	printf(" )  ( ')\n");
	printf("(  /  )\n");
	printf(" \\(__)|");
	return 0;
}

//https://www.acmicpc.net/problem/8393
void BOJ8393(void) {
	int n, total;
	total = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		total += i;
	}
	printf("%d", total);
	return 0;
}

//https://www.acmicpc.net/problem/11654
void BOJ11654(void) {
	char c;
	scanf("%c", &c);
	printf("%d", (int)c);
	return 0;
}

//https://www.acmicpc.net/problem/2558
void BOJ2558(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a + b);
	return 0;
}
	
//https://www.acmicpc.net/problem/7287
void BOJ7287(void) {
	printf("89\n");
	printf("--------");
	return 0;
}

//https://www.acmicpc.net/problem/2475
void BOJ2475(void) {
	int a, b, c, d, e;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	printf("%d", (a * a + b * b + c * c + d * d + e * e) % 10);
	return 0;
}

//https://www.acmicpc.net/problem/10757
#define ZeroOr(X) (X==0?0:X-'0')

char sum[10002];

void reverse(char* arr, int len) {
	char temp;

	for (int i = 0; i < len / 2; i++) {
		temp = arr[i];
		arr[i] = arr[len - 1 - i];
		arr[len - 1 - i] = temp;
	}
	return;
}

char* add(char* A, char* B) {
	int len = 0, up = 0;

	if (strlen(A) > strlen(B))
		len = strlen(A); //strlen(): 문자열 길이 확인
	else
		len = strlen(B);

	reverse(A, strlen(A));
	reverse(B, strlen(B));

	for (int i = 0; i <= len; i++) {
		sum[i] = (ZeroOr(A[i]) + ZeroOr(B[i]) + up) % 10 + '0'; //+, - '0': 아스키 코드 이용 방법('0' = 48)
		if ((ZeroOr(A[i]) + ZeroOr(B[i]) + up) >= 10)
			up = 1;
		else
			up = 0;
	}
	if (sum[len] == '0')
		sum[len] = 0;

	reverse(sum, strlen(sum));

	return sum;
}

void BOJ10757(void) {
	char a[10001];
	char b[10001];
	scanf("%s %s", &a, &b);
	printf("%s", add(a, b));

	return 0;
}

//https://www.acmicpc.net/problem/3046
void BOJ3046(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", b * 2 - a);
}

//https://www.acmicpc.net/problem/2914
void BOJ2914(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", (b - 1) * a + 1);
}

//https://www.acmicpc.net/problem/5338
void BOJ5338(void) {
	printf("       _.-;;-._\n");
	printf("'-..-'|   ||   |\n");
	printf("'-..-'|_.-;;-._|\n");
	printf("'-..-'|   ||   |\n");
	printf("'-..-'|_.-''-._|");
}

//https://www.acmicpc.net/problem/1550
void BOJ1550(void) {
	int a;
	scanf("%x", &a);
	printf("%d", a);
}

//https://www.acmicpc.net/problem/10699
#include <time.h> //시간, 날짜에 관한 함수

void BOJ10699(void) {
	time_t t = time(NULL);
	struct tm tm = *localtime(&t); //localtime() 함수: struct tm 구조체 포인터 값을 반환

	printf("%d-%02d-%02d", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);

	return 0;
}

//https://www.acmicpc.net/problem/11942
void BOJ11942(void) {
	printf("고려대학교");
	return 0;
}

//https://www.acmicpc.net/problem/5337
void BOJ5337(void) {
	printf(".  .   .\n");
	printf("|  | _ | _. _ ._ _  _\n");
	printf("|/\\|(/.|(_.(_)[ | )(/.\n");
	return 0;
}

//https://www.acmicpc.net/problem/2845
void BOJ2845(void) {
	int a, b, c, d, e, f, g;
	scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);
	int tot = a * b;
	printf("%d %d %d %d %d", c - tot, d - tot, e - tot, f - tot, g - tot);
	return 0;
}

//https://www.acmicpc.net/problem/9653
void BOJ9653(void) {
	printf("    8888888888  888    88888\n");
	printf("   88     88   88 88   88  88\n");
	printf("    8888  88  88   88  88888\n");
	printf("       88 88 888888888 88   88\n");
	printf("88888888  88 88     88 88    888888\n");
	printf("\n");
	printf("88  88  88   888    88888    888888\n");
	printf("88  88  88  88 88   88  88  88\n");
	printf("88 8888 88 88   88  88888    8888\n");
	printf(" 888  888 888888888 88  88      88\n");
	printf("  88  88  88     88 88   88888888\n");
	return 0;
}

//https://www.acmicpc.net/problem/5339
void BOJ5339(void) {
	printf("     /~\\\n");
	printf("    ( oo|\n");
	printf("    _\\=/_\n");
	printf("   /  _  \\\n");
	printf("  //|/.\\|\\\\\n");
	printf(" ||  \\ /  ||\n");
	printf("============\n");
	printf("|          |\n");
	printf("|          |\n");
	printf("|          |\n");
	return 0;
}

//https://www.acmicpc.net/problem/3003
void BOJ3003(void) {
	int a, b, c, d, e, f;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	printf("%d %d %d %d %d %d", 1 - a, 1 - b, 2 - c, 2 - d, 2 - e, 8 - f);
	return 0;
}

//https://www.acmicpc.net/problem/9654
void BOJ9654(void) {
	printf("SHIP NAME      CLASS          DEPLOYMENT IN SERVICE\n");
	printf("N2 Bomber      Heavy Fighter  Limited    21        \n");
	printf("J-Type 327     Light Combat   Unlimited  1         \n");
	printf("NX Cruiser     Medium Fighter Limited    18        \n");
	printf("N1 Starfighter Medium Fighter Unlimited  25        \n");
	printf("Royal Cruiser  Light Combat   Limited    4         \n");
	return 0;
}

//https://www.acmicpc.net/problem/10926
void BOJ10926(void) {
	char a[51];
	scanf("%s", &a);

	printf("%s??!", a);

	return 0;
}

//https://www.acmicpc.net/problem/5554
void BOJ5554(void) {
	int a, b, c, d;

	scanf("%d %d %d %d", &a, &b, &c, &d);

	int tot = a + b + c + d;

	printf("%d\n%d", tot / 60, tot % 60);

	return 0;
}

//https://www.acmicpc.net/problem/10170
void BOJ10170(void) {
	printf("NFC West       W   L  T\n");
	printf("-----------------------\n");
	printf("Seattle        13  3  0\n");
	printf("San Francisco  12  4  0\n");
	printf("Arizona        10  6  0\n");
	printf("St. Louis      7   9  0\n");
	printf("\n");
	printf("NFC North      W   L  T\n");
	printf("-----------------------\n");
	printf("Green Bay      8   7  1\n");
	printf("Chicago        8   8  0\n");
	printf("Detroit        7   9  0\n");
	printf("Minnesota      5  10  1\n");
	return 0;
}

//https://www.acmicpc.net/problem/5522
void BOJ5522(void) {
	int a, b, c, d, e;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	printf("%d", a + b + c + d + e);
	return 0;
}

//https://www.acmicpc.net/problem/1271
void BOJ1271(void) {
	
}

//https://www.acmicpc.net/problem/14645
void BOJ14645(void) {
	int N, K, A, B;
	scanf("%d %d", &N, &K);
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &A, &B);
	}
	printf("비와이");
	return 0;
}

//https://www.acmicpc.net/problem/16394
void BOJ16394(void) {
	int a;
	scanf("%d", &a);
	printf("%d", a - 1946);
	return 0;
}

//https://www.acmicpc.net/problem/15894
void BOJ15894(void) {
	long long a;
	scanf("%lld", &a);
	printf("%lld", a * 4);
	return 0;
}

//https://www.acmicpc.net/problem/2338
void BOJ2338(void) {

}

//https://www.acmicpc.net/problem/15962
void BOJ15962(void) {
	printf("파이팅!!");
	return 0;
}

//https://www.acmicpc.net/problem/15733
void BOJ15733(void) {
	printf("I'm Sexy");
	return 0;
}

//https://www.acmicpc.net/problem/16430
void BOJ16430(void) {
	int a, b, flag = 0;
	scanf("%d %d", &a, &b);
	int temp = b - a;
	for (int i = temp; i > 1; i--) {
		if (b % i == 0 && temp % i == 0) {
			b /= i;
			temp /= i;
			flag = 1;
		}
		if (flag == 1)
			break;
	}
	printf("%d %d", temp, b);

	return 0;
}

//https://www.acmicpc.net/problem/15964
void BOJ15964(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", (a + b) * (a - b));
	return 0;
}

//https://www.acmicpc.net/problem/18108
void BOJ18108(void) {
	int a;
	scanf("%d", &a);
	printf("%d", a - 543);
	return 0;
}

//https://www.acmicpc.net/problem/15727
void BOJ15727(void) {
	int a, temp1 = 0;
	scanf("%d", &a);
	if (a < 5) {
		printf("1");
	}
	else {
		temp1 = a / 5;
		if (a % 5 != 0)
			temp1 += 1;
		printf("%d", temp1);
	}

	return 0;
}

//https://www.acmicpc.net/problem/17295
void BOJ17295(void) {
	char a[10000];
	scanf("%s", &a);
	printf("Avengers: Endgame");

	return 0;
}

//https://www.acmicpc.net/problem/16170
#include <time.h>
void BOJ16170(void) {
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);

	printf("%d\n%02d\n%02d", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);

	return 0;
}

//https://www.acmicpc.net/problem/14652
void BOJ14652(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d %d", c / b, c % b);
	return 0;
}

//https://www.acmicpc.net/problem/6749
void BOJ6749(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", 2 * b - a);
	return 0;
}

//https://www.acmicpc.net/problem/8370
void BOJ8370(void) {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%d", a * b + c * d);

	return 0;
}

//https://www.acmicpc.net/problem/17256
void BOJ17256(void) {
	int a, b, c, d, e, f;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	printf("%d %d %d", d - c, e / b, f - a);

	return 0;
}

//https://www.acmicpc.net/problem/17496
void BOJ17496(void) {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%d", (a - 1) / b * c * d);
	return 0;
}

//https://www.acmicpc.net/problem/15439
void BOJ15439(void) {
	int a;
	scanf("%d", &a);
	printf("%d", a * a - a);
	return 0;
}

//https://www.acmicpc.net/problem/20492
void BOJ20492(void) {
	long a;
	scanf("%ld", &a);
	printf("%ld %ld", a * 78 / 100, a * 80 / 100 + a * 20 / 100 * 78 / 100);
	return 0;
}

//https://www.acmicpc.net/problem/18301
void BOJ18301(void) {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("%d", (a + 1) * (b + 1) / (c + 1) - 1);

	return 0;
}

//https://www.acmicpc.net/problem/20254
void BOJ20254(void) {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%d", 56 * a + 24 * b + 14 * c + 6 * d);

	return 0;
}

//https://www.acmicpc.net/problem/21300
void BOJ21300(void) {
	int a, sum = 0;
	for (int i = 0; i < 6; i++) {
		scanf("%d", &a);
		sum += a;
	}
	printf("%d", 5 * sum);

	return 0;
}

//https://www.acmicpc.net/problem/23234
void BOJ23234(void) {
	printf("The world says hello!");

	return 0;
}


