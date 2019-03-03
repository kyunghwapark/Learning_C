#include <stdio.h>

// ����Լ� printf �ǽ�
void printex();


// ���� �Լ�
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

	// ������ : %�ڸ���d
	printf("%5d\n", 123);
	// ������ : %-�ڸ���d : ��������
	printf("%-10d\n", 98765);
	// �Ǽ��� : %��ȿ�ڸ���.�Ҽ��������ڸ���f(�ݿø�)
	printf("%6.2f\n", 123.456);
	// �Ǽ��� : %-��ȿ�ڸ���.�Ҽ��������ڸ���f : ��������
	printf("%-10.4f> \n", 987.1234567);
	// ���ڿ� : %�ڸ���s
	printf("%10s\n", "Hello");
	// ���ڿ� : %-�ڸ���s : ��������
	printf("%-10s\n", "Hello");

	printf("    123456789012345678901234567890\n");
	printf("+ : %10d\t%10d\n", 123, 12345);
	printf("- : %-10d\t%-10d\n\n", 123, 12345);
	printf("+ : %10.2f\t%.2f\n", 98.765, 987654.123);
	printf("- : %-.2f\t%-10.2f\n\n", 98.765, 987654.123);
	printf("+ : %15s\n", "Hello World");
	printf("- : %-15s\n", "Hello World");
}