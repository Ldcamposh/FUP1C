#include <stdio.h>
#include <stdlib.h>

int i;
int f;
int suma;
int num;

int main()

{
	printf("Introducir primer numero\n");
	scanf("%d",&i);
	
	printf("Introducir segundo numero\n");
	scanf("%d",&f);
	num=0;
	suma=0;

	while (suma<=f)
	
	{
	suma=suma+1;
	num=num+i;
	}
	
	num=num-i;
	printf("La multiplicacion resulta en:%d\n",num);
	printf("Los numeros usados fueron:\n");
	printf("%d\n",i);
	printf("%d\n",f);
	
	system("pause");
}
