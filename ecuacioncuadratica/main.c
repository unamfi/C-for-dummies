#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	double a, b, c;
    double discriminante;
    double x1, x2;
    double x;
    double parte_real , parte_imaginaria;
    printf("Resolucioón de un sistema de segundo grado.\n");
    printf("==================================================\n");
    printf("Desarrollado por: Héctor Jacales |¬¬(\n");
    printf("ax²+bx+c=0\n\n");
    printf("a =\n");
    scanf("%lf", &a);
    printf("b =\n");
    scanf("%lf", &b);
    printf("c =\n");
    scanf("%lf", &c);
    printf("\nLa ecuación resuelta es %.2fx² %+.2lfx %+.2lf = 0\n",a,b,c );
    discriminante = pow(b,2.0) - 4.0*a*c;
    double sol1( double ba, double d)
    {
    	parte_real= -ba / 2*a;
    	parte_imaginaria = sqrt(-d)/2*a;
    	printf("Soluciones Complejas Conjugadas: %.2f +%.2lfi y %.2lf + %.2lfi\n ",parte_real,parte_imaginaria,parte_real, -parte_imaginaria );
       
    }
   double sol2(double ba, double d)
   {
   	x1 = (-ba - sqrt(d))/(2.0*a);
    x2 = (-ba + sqrt(d))/(2.0*a);
    printf("Soluciones reales y distintas %.2lf y %.2lf\n", x1,x2 );
   }
   double sol3(double ba)
   {
      x= -ba/3.0*a;
      printf("Solución real doble: %.2lf\n",x );
   }
    if (discriminante < 0.0)

    {
    	sol1(b,discriminante);

    }
    else{
    	if (discriminante > 0.0)
    	{
    		sol2(b,discriminante);
    	}
    	else{
    		sol3(b);
    		
    	}
    }
    printf("\n\n");

	return 0;
}