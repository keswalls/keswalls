�1

#include<stdio.h>
#include<math.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int b;
	printf("1.	��� ������ ����� � ������. ����� ���������� ������ ����������, ������� �������� ������ ����\n");
	printf("b:");
	scanf_s("%i", &b);

	printf("kb:%i\n", b / 1024);
	return 0;
}



�2

#include<stdio.h>
#include<math.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int A, B;
	printf("���� ����� ������������� ����� A � B (A > B). �� ������� ����� A ��������� ����������� ��������� ���������� �������� ����� B (��� ���������). ����� ���������� �������� B, ����������� �� ������� A\n");
	printf("A:");
	scanf_s("%i", &A);

	printf("B:");
	scanf_s("%i", &B);

	printf("%i\n", A / B);

	return 0;
}


�3

#include<stdio.h>
#include<math.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int A, B;
	printf("���� ����� ������������� ����� A � B (A > B). �� ������� ����� A ��������� ����������� ��������� ���������� �������� ����� B (��� ���������). ����� ����� ��������� ����� ������� A.\n");
	printf("A:");
	scanf_s("%i", &A);

	printf("B:");
	scanf_s("%i", &B);

	printf("%i\n", A % B);
	return 0;
}




�4

#include<stdio.h>
#include<math.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int A;
	printf("���� ���������� �����. ������� �����, ���������� ��� ������������ ���� ��������� �����\n");
	printf("A:");
	scanf_s("%i", &A);
	printf("%i\n", (A / 10) + (A % 10) * 10);
	return 0;
}




�5

#include<stdio.h>
#include<math.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int a, x, y, z;
	printf("���� ����������� �����. � ��� ���������� ������ ����� ����� � ��������� �� ������. ������� ���������� �����.\n");
	printf("������� ����������� �����:");
	scanf_s("%d", &a);
	x = a / 100;
	y = a / 10 % 10;
	z = a % 10;
	printf("%d%d%d", y, z, x);
	return 0;
}




