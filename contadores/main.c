#include <stdio.h>

int main(int argc, char const *argv[])
{
	/*Contador utilizando el ciclo for()*/
	printf("Este contador utiliza un cliclo for()\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n",i );
	}
	/*Contador utilizando el ciclo while()*/
	printf("Este contador utiliza un ciclo while()\n");
	int b =0 ;
	while( b < 10){
		printf("%d\n",b );
		b++;

	}
	/*Contador utilizando un ciclo do-while()*/
	printf("Este contador utiliza un ciclo do-while()\n");
	int a =0;
	do{
		printf("%d\n", a);
		a++;
	}
	while(a < 10);

	return 0;
}