#include <stdio.h>
#include <stdlib.h>


int comida;
int p;
int h;
int s;
int main()

{

h=34;
p=25;
h=30;


printf("Generador de cuenta en un restaurante.");
printf("Introducir platillo a ordenar. 1=Papas. 2=Hamburguesa 3=Sopa");
scanf("%d",&comida);

switch(comida)

	{
		case 1:
		{printf("El costo es\%h");
		printf(p);
		}
		
	break;
	
		case 2:
		{printf("El costo es\%p");
		printf(h);
		}
		
	break;
	
		case 3:
		{printf("El costo es\%h");
		printf(s);
		}
		
	break;	
	}

printf("Inserte el número de unidades");
printf("Las ganancias son:\n");
	
system("pause");
}
