#include <stdio.h>

int main(int argc, char * argv[])
{
float n, factorial, indice;
n = 0;
factorial = 1;
char close = 'Y';
printf("\n\nFactorial\n=========================================\n\n");

 float fact(){
 	printf("Escriba un numero para calcular su factorial\n");
scanf("%f", &n);
    for (indice = 1.0; indice < n+1.0;indice++)
{
	factorial = factorial*indice;
}printf("El factorial de %4.0f es:\n%.1f\n",n,factorial );
printf("Desea Calcular otro numero[Y/N]\n");
scanf("%s", &close);
if (close == 'Y')
{
	fact();
}
else {
	return 0;
}
 }
fact();



}