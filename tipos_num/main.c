#include <stdio.h>

int main( int argc , char * argv[])
{
	short unShort;
	unsigned short unUnsignedShort;
	int unInt;
	unsigned int unUnsignedInt;
	long unLong;
	unsigned long unUnsignedLong;
	long long unLongLong;
	printf("\nTipós númericos enteros - espacio ocupado por una variable\n" );
	printf("===============================================================\n");
	printf("unShort ocupa  %d bytes\n", sizeof(unShort) );
	printf("unUnsignedShort ocupa  %d bytes\n", sizeof(unUnsignedShort) );
	printf("unInt ocupa  %d bytes\n", sizeof(unInt) );
	printf("unUnsignedInt ocupa  %d bytes\n", sizeof(unUnsignedInt) );
	printf("unLong ocupa  %d bytes\n", sizeof(unLong) );
	printf("unUnsignedLong ocupa  %d bytes\n", sizeof(unUnsignedLong) );
	printf("unLongLong ocupa %d bytes\n", sizeof(unLongLong) );
	return 0;

}