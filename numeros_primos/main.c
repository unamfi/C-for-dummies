#include <stdio.h>
#include <math.h>
/*Este es un programa que calcúla si un numero entero es primo*/
long numero;
int i = 0;
int primo;
char close ='A';
int main(int argc, char const *argv[])
{
printf("==========Este es un programa que evalua si un numero es primo=========\n");
printf("============== Desarrollado por Héctor Jacales  =======================\n\n\n\n");

	

	operaciones();
	return 0;
	
}
int operaciones()
	{
		
		printf("Teclee un número a evaluar:\n");
		scanf("%ld",&numero);
		int factores = sqrt(numero);
		for ( i = 2; i <= factores; i+=2)
		{
			if( numero % i == 0){
				printf("El numero %ld no es primo\n", numero );
				primo = 0;
				break;
                
				
			}
			else{
				primo = 1;
			}

		}
        if(primo == 1){
         is_primo();
        }
		
flow();
	}
int egg(){
		printf("Erentxu <3\n");
	}
int is_primo(){
        printf("El numero %ld  es primo\n", numero );
		printf("Desea evaluar otro número? [Y/N]\n");
		scanf("%s", &close);
		if (close == 'Y')
		{
			operaciones();
		}
		else{
			if( close == 'E'){
				egg();
			}
			else{
				if (close == 'N')
				{
					return 0;
				}
			}
			printf("Escriba Y (SI) O N  (NO)\n");
			flow();
		}
}
int flow(){
	printf("Desea evaluar otro número? [Y/N]\n");
	scanf("%s", &close);
	if (close == 'Y')
		{
			operaciones();
		}
		else{
			if( close == 'E'){
				egg();
			}
			else{
				if (close == 'N')
				{
					return 0;
				}
			}
			printf("Escriba Y (SI) O N  (NO)\n");
			flow();
		}
}