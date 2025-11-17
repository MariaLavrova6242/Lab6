#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	int yeas;
	float a;

	printf("Введите год:");
	scanf("%d", &yeas);
	a = (((yeas % 4 == 0) && (yeas % 100 != 0))) || (yeas % 400 == 0);
	if (a == 1) printf("Год %d високосный",yeas);
	else printf("Год %d не високосный", yeas);
	return 0;
}