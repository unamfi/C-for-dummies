#include <stdio.h>

 int main(int argc, char const *argv[])
{
	int edad;
	printf("Por favor ingrese su edad para verificar que es mayor de edad\n");
	scanf("%d", &edad);
	if(edad >= 18){
		printf("Usted es mayor de edad\n");
	}
	else 
	{
		printf("Usted no es mayor de edad\n");
	}
	return 0;
}