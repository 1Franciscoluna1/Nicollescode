//programa donde realices una estructura de un alumno nombre, telefono, sexo, edad y altura 
//#include <conio.h>
#include<stdio.h>
struct dato
{
	char nombre[20],tel[10],s;
	int edad;
	float alt;
};
typedef dato d_alumno;
main()
{
	int opc;


	d_alumno alumno;
	do 
	{
	
	printf("elige una opcion\n\t1. iniciar menu\t\n2. salir");
	scanf("%i",opc);
	switch(opc)
	{
    case 1:
    	
		
	printf("\n\tescribie tu nombre: ");
	fflush (stdin); gets(alumno.nombre);
	printf("\n\tescribe tu telefono: ");
	fflush(stdin); gets(alumno.tel);
	printf("\n\tescribe tu altura: ");
	scanf("%f",& alumno.alt);
	printf("\n\tEscribe tu sexo: ");
	scanf("%s",& alumno.s);
	printf("\n\tescribe tu edad: ");
	scanf("%i",& alumno.edad);
	printf("\n\tlos datos del alumno son: ");
	printf("\n\tnombre: %s", alumno.nombre);
	printf("\n\tedad: %i", alumno.edad);

	break;
	case 2:
		printf("eligio la opcion de salir");
		break;
    } 
}
while (opc!=2);
}