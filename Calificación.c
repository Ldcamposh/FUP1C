#include<stdio.h>
#include<stdlib.h>

int calificacion;

int main()
{
	printf("Programa que te dice si aprobaste o no\n");
	printf("Introduce tu calificacion ");
	scanf("%d", &calificacion);
	printf("Tu calificacion es: %d\n",calificacion);


	if(calificacion >=7)
	{
	
	printf("Aprobaste\n");
	}	
	else
	{
		printf("Reprobaste\n");
	}
	

	system("pause");
}
