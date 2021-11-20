№1

#include<stdio.h>
#include<math.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int b;
	printf("1.	Дан размер файла в байтах. Найти количество полных килобайтов, которые занимает данный файл\n");
	printf("b:");
	scanf_s("%i", &b);

	printf("kb:%i\n", b / 1024);
	return 0;
}



№2

#include<stdio.h>
#include<math.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int A, B;
	printf("Даны целые положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений). Найти количество отрезков B, размещенных на отрезке A\n");
	printf("A:");
	scanf_s("%i", &A);

	printf("B:");
	scanf_s("%i", &B);

	printf("%i\n", A / B);

	return 0;
}


№3

#include<stdio.h>
#include<math.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int A, B;
	printf("Даны целые положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений). Найти длину незанятой части отрезка A.\n");
	printf("A:");
	scanf_s("%i", &A);

	printf("B:");
	scanf_s("%i", &B);

	printf("%i\n", A % B);
	return 0;
}




№4

#include<stdio.h>
#include<math.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int A;
	printf("Дано двузначное число. Вывести число, полученное при перестановке цифр исходного числа\n");
	printf("A:");
	scanf_s("%i", &A);
	printf("%i\n", (A / 10) + (A % 10) * 10);
	return 0;
}




№5

#include<stdio.h>
#include<math.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int a, x, y, z;
	printf("Дано трехзначное число. В нем зачеркнули первую слева цифру и приписали ее справа. Вывести полученное число.\n");
	printf("Введите трехзначное число:");
	scanf_s("%d", &a);
	x = a / 100;
	y = a / 10 % 10;
	z = a % 10;
	printf("%d%d%d", y, z, x);
	return 0;
}




