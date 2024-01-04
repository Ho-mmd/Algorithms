//https://www.acmicpc.net/problem/16170
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>

int main(void) {
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);

	printf("%d\n%02d\n%02d", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);

	return 0;
}