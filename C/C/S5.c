#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int n, j, k, cnt = 0;
	char arr[101];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", arr);
		k = 0;
		for (j = 0; j < strlen(arr) - 2; j++) {
			for (k = j + 2; k < strlen(arr); k++) {
				if (arr[j] == arr[k])
					break;
			}
			if (arr[j] == arr[k])
				break;
		}
		if (k == strlen(arr) || k == 0)
			cnt++;
	}

	printf("%d", cnt);

	return 0;
}


//https://www.acmicpc.net/problem/4673
void BOJ4673() {
	int sum, a = 1, aa, b, arr[10001], i;

	while (1) {
		sum = 0;
		b = 1;
		sum += a;
		aa = a;
		while (aa != 0) {
			b = aa % 10;
			sum += b;
			aa /= 10;
		}

		if (sum <= 10000)
			arr[sum] = 1;

		a++;

		if (a > 10000)
			break;
	}

	for (i = 1; i < 10001; i++) {
		if (arr[i] != 1)
			printf("%d\n", i);
	}

	return 0;
}

//https://www.acmicpc.net/problem/1978
void BOJ1978() {
	int n, a, count = 0, flag;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		flag = 0;
		for (int j = 2; j <= a; j++) {
			if (a % j == 0)
				flag++;
		}
		if (flag == 1)
			count++;
	}

	printf("%d", count);

	return 0;
}

//https://www.acmicpc.net/problem/1316
void BOJ1316() {
	int n, j, k, cnt = 0;
	char arr[101];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", arr);
		k = 0;
		for (j = 0; j < strlen(arr) - 2; j++) {
			for (k = j + 2; k < strlen(arr); k++) {
				if (arr[j] == arr[k])
					break;
			}
			if (arr[j] == arr[k])
				break;
		}
		if (k == strlen(arr) || k == 0)
			cnt++;
	}

	printf("%d", cnt);

	return 0;
}


