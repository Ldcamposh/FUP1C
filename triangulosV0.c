#include <stdio.h>
#include <math.h>
 
int main()

{
int x,y,z;
double area;
double perimetro;
double semiperimetro;
float a,b,c,s;
double prearea;
double sxp;

  printf("\nIntroducir lados del triangulo\n");
  scanf("%d %d %d",&x,&y,&z);
  
  perimetro=x+y+z;
  semiperimetro=perimetro/2;
  s=semiperimetro;
  a=s-x;
  b=s-y;
  c=s-z;
  prearea=a*b*c;
  sxp=semiperimetro*prearea;
  area=sqrt(sxp);
  
  
  
  if((x==y) && (y==z))
       {
        printf("\nEl triangulo es equilatero\n");
       }
       
  else
  {
      if(x==z || y==z || x==y)
            {
            printf("\nEl triangulo es isoceles\n");
            }
  
            if(x=!y && y!=z)
            {
             printf("\nEl triangulo es escaleno\n");
            }
            
            if(x+z>y || y+z<x || x+y<z)
            {
             printf("\nValores irregulares\n");
            } 
  }
 
  printf("El perimetro del triangulo es: %lf\n",perimetro);
  
  printf("El area del triangulo es: %lf\n",area);
 
system("pause");
}
