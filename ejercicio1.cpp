#include <studio.h>
int main()
{
	int dia, mes, year, result=0;
	printf("decime el dia de tu cumple: ");
	scanf_s("%d", &dia);
	printf("decime el mes de tu cumpleanos en numero: ");
	scanf_s("%d", &mes);
	printf_s("decime el year de tu nacimiento (4 digitos): ");
	scanf_s("%d", &year);

	result = dia + mes + year;
	printf("result = %d", result);
}