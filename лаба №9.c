№1

#include<stdio.h>
#include<math.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int N;
	printf("С начала суток прошло N секунд (N — целое). Найти количество секунд, прошедших с начала последней минуты\n");
	printf("N:");
	scanf_s("%i", &N);

	printf("%i\n", N % 60);
	return 0;
}






№2

#include<stdio.h>
#include<math.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int K;
	printf("Дни недели пронумерованы следующим образом: 0 — воскресенье, 1 — понедельник, 2 — вторник, . . . , 6 — суббота. Дано целое число K, лежащее в диапазоне 1–365. Определить номер дня недели для K-го дня года, если известно, что в этом году 1 января было понедельником\n");
	printf("K:");
	scanf_s("%i", &K);

	printf("%i\n", K % 7);
	return 0;
}





№3

#include<stdio.h>
#include<math.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int K, N, s;
	printf("Дни недели пронумерованы следующим образом: 1 — понедельник, 2 — вторник, . . . , 6 — суббота, 7 — воскресенье. Дано целое число K, лежащее в диапазоне 1–365, и целое число N, лежащее в диапазоне 1–7. Определить номер дня недели для K-го дня года, если известно, что в этом году 1 января было днем недели с номером N\n");
	printf("K:");
	scanf_s("%i", &K);
	printf("N:");
	scanf_s("%i", &N);
	s = (K - (7 - N + 1)) % 7;
	printf("%i\n", s);
	return 0;
}





№4

#include<stdio.h>
#include<math.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int A, B, C, N;
	printf("Даны целые положительные числа A, B, C. На прямоугольнике размера A × B размещено максимально возможное количество квадратов со стороной C (без наложений). Найти количество квадратов, размещенных на прямоугольнике, а также площадь незанятой части прямоугольника. \n");
	printf("A:");
	scanf_s("%i", &A);

	printf("B:");
	scanf_s("%i", &B);

	printf("C:");
	scanf_s("%i", &C);
	printf("n:");
	N = (A / C) * (B / C);
	printf("%i\n", (A / C) * (B / C));
	printf("Площадь незанятой части:");
	printf("%i\n", A * B - N * C * C);
	return 0;
}




№5

#include<stdio.h>
#include<math.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int A;
	printf("Дан номер некоторого года (целое положительное число). Определить соответствующий ему номер столетия, учитывая, что, к примеру, началом 20 столетия был 1901 год\n");
	printf("Год:");
	scanf_s("%i", &A);

	printf("%i\n", ((A - 1) / 100) + 1);
	return 0;
}


















