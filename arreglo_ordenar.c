#include<stdio.h>
#include<stdlib.h>

int arreglo[20];
int i;
int j;
int menor=0;
int masmenor=60000;
int suma;

int main()
{
	printf("Programa que imprime los numeros ingresados en orden de mayor a menor \n");
	//50,20,6,2,1,45,50,22, 7, 0,25,9, 8, 2, 63,81 ,49, 30,4,26
	
	for(i=0;i<20;i++)
	{
		printf("Ingresa un numero: \n");
		scanf("%d",&arreglo[i]);
	}
	for(j=0;j<20;j++)
	{
		menor=0;
		
		for(i=0;i<20;i++)
		{
		if (arreglo[i] >menor && arreglo[i] <masmenor&& arreglo[i]=arreglo[i])
			{
				menor = arreglo[i];
			}		    
		}
		printf("Numero por jerarquia; %d\n",menor);
		masmenor= menor;
	}
	system("pause");
}
