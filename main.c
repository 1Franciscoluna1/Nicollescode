//programa donde realices una estructura de un alumno nombre, telefono, sexo, edad y altura 
//#include <conio.h>
#include<stdio.h>
typedef struct 
{
	char nombre[20],tel[10],s;
	int edad;
	float alt;
}dato;


int main()
{
  dato alumno[5];
	int opc;

	do 
	{
	
	printf("elige una opcion\n\t1. iniciar menu\t\n2. salir");
	scanf("%i",&opc);
	switch(opc)
	{
    case 1:
    	
		
	printf("\n\tescribie tu nombre: ");
	//fflush (stdin); 
	scanf(" %[^\n]s",alumno[1].nombre);
	printf("\n\tescribe tu telefono: ");
	//fflush(stdin); 
	scanf(" %[^\n]s",alumno[1].tel);
	printf("\n\tescribe tu altura: ");
	scanf("%f",& alumno[1].alt);
	printf("\n\tEscribe tu sexo: ");
	scanf("%s",& alumno[1].s);
	printf("\n\tescribe tu edad: ");
	scanf("%i",& alumno[1].edad);
	printf("\n\tlos datos del alumno son: ");
	printf("\n\tnombre: %s", alumno[1].nombre);
	printf("\n\tedad: %i\n\n", alumno[1].edad);

	break;
	case 2:
		printf("eligio la opcion de salir");
		break;
    } 
}
while (opc!=2);
}