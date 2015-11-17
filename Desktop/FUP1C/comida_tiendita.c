#include <stdio.h>
#include <stdlib.h>


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
printf("Menu:	");
printf("Papas; teclee 1.	Hamburguesa; teclee 2. 		Jugo; teclee 3. 		Refresco; Teclee 4. 		Hotdog; Teclee 5. 		Agua; Teclee 6.");
printf("Inserte el numero de unidades a comprar");
scanf ("%d", &num);


printf("Inserte el plato a ordenar ");
scanf("%d",&plato );


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
	
	printf("Las ganancias del dia son: 500");
 
system("pause");
}



