/*
	표준 입출력 : stdio
		- 표준 입력 : stdin
		- 표준 출력 : stdout
		- 표준 에러 : stderr
*/

// 전처리문 : 컴파일 시 제일 먼저 처리.
#include <stdio.h>

// main 함수 : C 프로그램 실행시 최초로 호출되는 함수
int main()
{
	printf("Hello World!\n");
	printf("This is my first C program.\n\n");

	printf("안녕하세요!\t");
	printf("한국어 인코딩 완료.");

	// 정상 종료 : 0을 return
	// 비정상 종료 : 0 외에 다른 숫자 return
	return 0;
}