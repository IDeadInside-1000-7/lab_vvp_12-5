#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>
#define YEAR 1900

const char* color[] =
{
"�����",
"�������",
"������",
"�������",
"�����",
"������",
"��������",
"�������",
"������",
"��������"
};

const char* animal[] =
{
"�����",
"������",
"�����",
"�����",
"�������",
"����",
"������",
"����",
"��������",
"������",
"������",
"������"
};

void main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");

	do
	{
		system("cls");

		int input, term = 0, count = 0, animalIndex = 0, colorIndex = 0;

		printf("\n ������� ��� � 1900-��: ");
		scanf("%d", &input);

		term = input - YEAR;
		animalIndex = (input - YEAR) % 12;
		colorIndex = (input - YEAR) % 10 / 2;

		if (animalIndex > 1 && animalIndex < 5) colorIndex += 5;

		printf("\n %d ��� ��� %s %s", input, color[colorIndex], animal[animalIndex]);

		_getch();
	} while (1);
}
