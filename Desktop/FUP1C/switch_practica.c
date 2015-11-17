#include <stdio.h>
#include <stdlib.h>


int mes;

int main()

{
printf("Inserte el mes ");
scanf("%d",&mes );
switch(mes)

	
	{

		case 1: 
		{
		printf("El mes es enero");
		}
	break;	

		case 2: 
		{
		printf("El mes es febrero");
		}
	break;

		case 3: 
		{
		printf("El mes es marzo");
		}
	break;

		case 4: 
		{
		printf("El mes es abril");
		}
	break;

		case 5: 
		{
		printf("El mes es mayo");
		}
	break;

		case 6: 
		{
		printf("El mes es junio");
		}
	break;

		case 7: 
		{
		printf("El mes es julio");
		}
	break;

		case 8: 
		{
		printf("El mes es agosto");
		}
	break;

		case 9: 
		{
		printf("El mes es septiembre");
		}
	break;
	
		case 10: 
		{
		printf("El mes es octubre");
		}
	break;

		case 11: 
		{
		printf("El mes es noviembre");
		}
	break;

		case 12: 
		{
		printf("El mes es diciembre");
		}
	break;
	 default:
	printf("Error");
 break;
	}

system("pause");
}



