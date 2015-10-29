#include<stdio.h>
#include<stdlib.h>



int final;
int i;
int main ()

{
	printf("Programa que cuenta del numero uno al indicado por el usuario.\n");
	printf("Introduzca el numero.\n");
	scanf("%d",&final);
	i=1;
	while (i<=final)
	{
		printf("los numeros son los siguientes %d \n",i);
		i=i+1;
	}
	
	
	system("pause");
}

