#include <stdio.h>
#include <stdlib.h>


int kilos;
int tipo;
int main()


{
	printf("Inserte el numero de kilos a lavar:\n");
	scanf("%d",&kilos);
	printf("Ingrese el tipo de ropa:\n 1=Normal\n 2=Delicada\n 3=Sucia\n");
	scanf("%d",&tipo);

		
		if (tipo==1)
		{
		printf("El lavado terminara en 5 minutos.\n");	
		}
		
		if (tipo==2)
		{
		printf("El lavado terminara en 10 minutos.\n");
		}

		if (tipo==3)
		{
		printf("El lavado terminara en 15 minutos.\n");
		}
			else
			if (tipo>3)
			{
			printf("Reintente con un tipo valido.\n");
			}

		
		if(kilos>0 && kilos<=10)
			{
			printf("Nivel de agua minimo.\n");
			}
			else
				if (kilos>=11 && kilos<=15)
				{
				printf("Nivel de agua medio.\n");
				}
				else
					if (kilos>=16 && kilos<=20)
					{
					printf("Nivel de agua maximo.\n");
					}
					else
						if (kilos>20)
						{
						printf("Demasiado peso en la lavadora.\n");
						}
system("pause");
}
