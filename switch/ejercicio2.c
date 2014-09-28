#include <stdio.h>

int num;
int main(int argc, char const *argv[])
{
	printf("Este programa evalua si un número es múltiplo de 2,3 y 5 simultaneamente\n");
    printf("========= Desarrollado por Héctor Jacales ==============\n");
    printf("Teclee un numero :\n");
    scanf("%d",&num);
    if ( num % 2 ==0 && num % 3 == 0 && num % 5 == 0)
    {
    	printf("El número es múltiplo de 2,3 y 5\n");
    }
    else{
    	printf("El número no es muliplo de 2,3 o 5 :(\n");
    }
	return 0;
}