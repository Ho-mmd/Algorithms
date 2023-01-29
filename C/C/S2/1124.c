//https://www.acmicpc.net/problem/1124
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int arr[100001];
int Prime(int n) {
	int cnt = 0, i = 2;

	while (n != 1) {
		if (n % i == 0) {
			n /= i;
			cnt++;
		}
		else
			i++;
	}

	if (arr[cnt] != 0)
		return 1;

	return 0;
}

int main(void)
{
	int a, b, cnt = 0;

	scanf("%d%d", &a, &b);

	for (int i = 2; i <= 100000; i++)
		arr[i] = i;

	for (int i = 2; i <= 100000; i++) {
		if (arr[i] == 0)
			continue;
		for (int j = 2 * i; j <= 100000; j += i)
			arr[j] = 0;
	}

	for (int i = a; i <= b; i++) {
		if (arr[i] == 0)
			cnt += Prime(i);
	}

	printf("%d", cnt);

	return 0;
}