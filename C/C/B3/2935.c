//https://www.acmicpc.net/problem/2935

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
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