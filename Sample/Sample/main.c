#include <stdio.h>

// 출력함수 printf 실습
void printex();

// 입력함수 scanf 실습
void scanex();

// 문자를 입력받아 그 값을 문자, 10진수, 16진수로 출력하는 함수 정의
void myself01();


// 메인 함수
int main()
{
	//printex();		// 출력함수 호출	
	//scanex();			// 입력함수 호출
	myself01();			// 

	return 0;
}

void printex(void)
{
	printf("%d,\t%x\n", 16, 16);
	printf("%f,\t%g\n", 3.01, 1000000.3412567);
	printf("%c\t", 'C');
	printf("%s\n", "Language");

	// 정수형 : %자릿수d
	printf("%5d\n", 123);
	// 정수형 : %-자릿수d : 왼쪽정렬
	printf("%-10d\n", 98765);
	// 실수형 : %유효자릿수.소수점이하자릿수f(반올림)
	printf("%6.2f\n", 123.456);
	// 실수형 : %-유효자릿수.소수점이하자릿수f : 왼쪽정렬
	printf("%-10.4f> \n", 987.1234567);
	// 문자열 : %자릿수s
	printf("%10s\n", "Hello");
	// 문자열 : %-자릿수s : 왼쪽정렬
	printf("%-10s\n", "Hello");

	printf("    123456789012345678901234567890\n");
	printf("+ : %10d\t%10d\n", 123, 12345);
	printf("- : %-10d\t%-10d\n\n", 123, 12345);
	printf("+ : %10.2f\t%.2f\n", 98.765, 987654.123);
	printf("- : %-.2f\t%-10.2f\n\n", 98.765, 987654.123);
	printf("+ : %15s\n", "Hello World");
	printf("- : %-15s\n", "Hello World");
}

void scanex(void)
{
	int number;
	char letter;
	float realnumber;

	printf("number? ");
	scanf("%d", &number);
	// 데이터 입력 시 그 뒤에 오는 엔터 문자를 처리하기 위해 추가한 명령문
	scanf("%*c");

	printf("realnumber? ");
	scanf("%f", &realnumber);
	scanf("%*c");

	printf("letter? ");
	scanf("%c", &letter);

	printf("number = %d, realnumber = %f, letter = %c\n",
		number, realnumber, letter);
}

void myself01() {

	// 문자 변수 선언
	char letter;

	// 문자 한 개 입력받기
	printf("letter? : ");
	scanf("%c", &letter);
	scanf("%*c");

	// 입력받은 문자를 문자로 출력
	printf("letter = %c\n", letter);
	// 입력받은 문자를 10진수로 출력
	printf("letter(10) = %u\n", letter);
	// 입력받은 문자를 16진수로 출력
	printf("letter(16) = %x\n\n", letter);

}