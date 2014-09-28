#include <stdio.h>
/*
Programa que calcúla si un numero ,Entero ,es multiplo de 2 ,de 3 o de 5,
*/
int numero;
int main(int argc, char const *argv[])
{
	printf("Este programa permite calcular si un número, Entero, es multiplo de 2, de 3 o de 5\n");
	printf("================= Desarollado Por Héctor Jacales================\n");
	printf("Teclee un número, entero.\n");
	scanf("%d",&numero);
	if ( numero % 2 == 0)
	{
		printf("El número es múltiplo de 2\n");
	}
	else{
		if( numero % 3 == 0)
		{
          printf("El número es múltiplo de 3\n");
		}
		if ( numero % 5 ==0)
		{
			printf("El número es múltiplo de 5\n");
		}
		else{
			printf("El número no es múltiplo de ningun factor (2,3 o 5)\n");
		}
	}


	return 0;
}