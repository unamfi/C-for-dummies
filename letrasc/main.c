#include <stdio.h>

int main(int argc , char * argv[])
{
	char letra;
	printf("Escriba una letra:\n" );
	scanf("%c%*c", &letra);
	printf("La letra que ha escrito es %c y su valor numerico es %d\n", letra,letra);
	return 0;
}