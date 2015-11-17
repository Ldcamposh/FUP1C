#include <stdio.h>
#include <stdlib.h>

int fin;
int i;
int suma;
int main ()

{
	printf ("Dame un numero \n");
	scanf("%d",&fin);
	i=1;
	suma=0;
	while (i<=fin)
	{
		suma=suma+i;
		i=i+1;
	}
	printf("La suma de los numeros naturales hasta el dato introducido es:\n");
	printf("%d\n",suma);
	
	system("pause");
}
