//https://www.acmicpc.net/problem/11718
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	char a[101];
	while (gets(a)) {
		if (a[0] == '/0')
			break;
		else
			puts(a);
	}
	return 0;
}