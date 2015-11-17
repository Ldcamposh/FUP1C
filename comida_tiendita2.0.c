#include <liss.h>
#include <stdlib.h>

int desicion;
int plato;
int num;

int papas;
int hamburguesa;
int jugo;
int refresco;
int hotdog;
int agua;


int main()

{
{

printf("Para ver las ganancias del dia, presione 1.\n Para ver el menu y ordenar su comida, presione 2.");
scanf("%d",&desicion);

switch(desicion)
{

case 1:
{
printf("Las ganancias del dia son: 500");
}
break;



case 2:
{
printf("Menu:\n");
printf("Papas; $23. teclee 1.\nHamburguesa; $40. teclee 2.\nJugo; $20. teclee 3.\nRefresco; $24. Teclee 4.\nHotdog; $32. Teclee 5.\nAgua; $15. Teclee 6.\n");

printf("Inserte el plato a ordenar ");
scanf("%d",&plato );

printf("Inserte el numero de unidades a comprar");
scanf ("%d", &num);

printf("Ha escogido comprar\n",num);
scanf ("d", &num);

	switch(plato)


	
	{

		case 1: 
		{
		papas=23*num;
		printf("Usted ha ordenado papas fritas. El costo es:%d\n",papas);
		}
	break;	

		case 2: 
		{
		hamburguesa=40*num;
		printf("Usted ha ordenado hamburguesa. El costo es:%d\n",hamburguesa);
		}
	break;

		case 3: 
		{
		jugo=20*num;
		printf("Usted ha ordenado jugo. El costo es:%d\n",jugo);
		}
	break;

		case 4: 
		{
		refresco=24*num;
		printf("Usted ha ordenado refresco. El costo es:%d\n",refresco);
		}
	break;

		case 5: 
		{
		hotdog=32*num;	
		printf("Usted ha ordenado hotdog. El costo es:%d\n",hotdog);
		}
	break;

		case 6: 
		{
		agua=15*num;
		printf("Usted ha ordenado agua. El costo es:%d\n",agua);
		}
	break;

	 default:
		{
	
	printf("Error");
		}
	break;
	
	}
}
}
system("pause");
}
}



