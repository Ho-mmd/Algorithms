//인덱스 바꾸기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int num1, int num2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char) * 100);
    int i = 0;
    
    while(my_string[i] != '\0') {
        if(i == num1)
            answer[i] = my_string[num2];
        else if(i == num2)
            answer[i] = my_string[num1];
        else
            answer[i] = my_string[i];
        i += 1;
    }
    
    answer[i] = '\0';
    
    return answer;
}