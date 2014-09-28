#include <stdio.h>

int main(int argc, char * argv[])
{
	int edad, numdias;
	printf("Escriba su edad (en años) y pulse Intro");
	scanf("%d", &edad);
	numdias = edad * 365 ;
	printf("Su edad en dias es %d\n", numdias);
	return 0 ;
	
}