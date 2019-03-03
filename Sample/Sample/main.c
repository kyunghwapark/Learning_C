#include <stdio.h>

// 출력함수 printf 실습
void printex();


// 메인 함수
int main()
{
	printex();
	
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