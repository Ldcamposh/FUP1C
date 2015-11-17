#include<stdio.h>
#include<stdlib.h>

int edad;

int main()
{
	printf("Programa que te dice en que etapa de la vida estas segun tu edad.\n");
	printf("Introduce tu edad ");
	scanf("%d", &edad);
	printf("Tu edad es: %d\n",edad);


	if(edad >=0&&edad <=2)
	
	{
	
	printf("Eres un bebe.\n");
	}
	
	if(edad >=3&&edad <=12)
	{
		printf("Eres un nino.\n");
	}
	
		
		if(edad >=13&&edad <=18)
		{
		
		printf("Eres un adolescente.\n");
		}
	
			if(edad >=19&&edad <=29)
	
			{
			printf("Eres un Joven.");
			}
			
				if(edad >=30&&edad <=59)
				
				{
				printf("Eres un adulto.\n");
				}
				
					if(edad >=60)
					
					{
					printf("Eres un adulto mayor.\n");
					}
	

	system("pause");
}
