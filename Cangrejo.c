#include<stdio.h>
#include<stdlib.h>

int profundidad;
int progreso;
int perdida;
int i=1;

int main()

{
	printf("Programa que nos indica el numero de dias en que un cangrejo sale de un agujero segun la profundidad de este, el progreso por dia y el retroceso.\n");
	printf("Introduce la profundidad del agujero.\n");
	scanf("%d",&profundidad);
	printf("Introduce el progreso por dia\n");
	scanf("%d",&progreso);
	printf("Introduce el numero de metros que regresa cada noche.\n");
	scanf("%d",&perdida);
	
	if(perdida > progreso && profundidad > progreso)
	{
		printf("El cangrejo nunca saldra.\n");
	}
	
	if(progreso < perdida && profundidad < progreso)
	{
		printf("El cangrejo saldra el primer dia. No importa si iba a retroceder.\n");
	}
	
	if(progreso == perdida)
	{
		printf("No hay progreso diario.\n");
	}
	
	if(progreso > profundidad)
	{
		printf("El cangrejo saldra en un dia o menos.\n");
	}
	
	if(progreso > perdida)
	{
		while(progreso < profundidad)
	{
		progreso=progreso-perdida;
		i=i+1;
		i-1;
		
	}
		printf("El cangrejo lograra salir al dia: %d\n", i);
		printf("Tal vez menos. Jaja :(\n");
	
	}
	//Requisitos del trabajo; valores correctos, funcionamiento con: no avance, avance igual, mas metros avance que profundidad

system("pause");
}
