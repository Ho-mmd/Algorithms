//https://www.acmicpc.net/problem/10757
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
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
int main(void) {
	char a[10001];
	char b[10001];
	scanf("%s %s", &a, &b);
	printf("%s", add(a, b));

	return 0;
}