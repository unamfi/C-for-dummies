#include <stdio.h>
struct FichaJugador
	{
		char nombre[15];
		char apellidos[30];
		unsigned char edad;
		float talla;
		char posición;
		char nacionalidad;


	};
struct FichaJugador lista[]=
{
	{"Manuel","Neuer",23,1.80,"GK","GER"},{"Thomas","Müller",24,1.80,"FW","GER"},{"Xabi","Alonso",30,1.82,"MDC","ESP"},
	{"Mario","Götze",22,1.82,"MDC","GER"},{"David","Alaba",25,1.90,"DEF","AUS"},{"Gianluca","Gaudinho",18,1.80,"MDC","GER"}
};
 int main(int argc, char const *argv[])
{
	int i;
	int numero_de_elementos = 6;
	const char * f = "%-11s%-31s%-16s%-11s%-11s\n";
	printf(f, "Registro","&nombre","&apellidos","&edad","&talla","&posición","&nacionalidad");
	printf("+------------------------+------------------------+-----------\n");
	for (i = 0; i < numero_de_elementos; ++i)
	{
		printf("%10u%30u%15u%10u%10u%10u%10u\n",i,&lista[i].nombre,&lista[i].apellidos,&lista[i].edad,&lista[i].talla,&lista[i].posición,&lista[i].nacionalidad );
	}


	return 0;
}