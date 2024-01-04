//https://www.acmicpc.net/problem/10699
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h> //시간, 날짜에 관한 함수

int main(void) {
	time_t t = time(NULL);
	struct tm tm = *localtime(&t); //localtime() 함수: struct tm 구조체 포인터 값을 반환

	printf("%d-%02d-%02d", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);

	return 0;
}