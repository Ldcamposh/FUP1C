#include <stdio.h>
#include <math.h>
 
int main()

{
    
//Programa que, luego de introducir tres datos, forma un triangulo si se cumplen los requisitos,
//También nos dice que tipo de triangulo es, su perimetro y su area por la formula de heron.
//Hecho por Luis Daniel Campos Huerta
    
int x,y,z;//datos iniciales
double area;
double perimetro;
double semiperimetro;
float a,b,c,s;
double prearea;
double sxp;

  printf("\nIntroducir lados del triangulo\n");
  scanf("%d %d %d",&x,&y,&z);
  
  perimetro=x+y+z;
  semiperimetro=perimetro/2;//inicia proceso de obtención de area
  s=semiperimetro;
  a=s-x;
  b=s-y;
  c=s-z;
  prearea=a*b*c;
  sxp=semiperimetro*prearea;
  area=sqrt(sxp);//finaliza proceso de obtención de area
  
  
  
  if(x+z>=y || y+z>=x || x+y>=z)
            
            {//llave donde primer if abre
            
             printf("\nEs un triangulo\n");
             
             if((x==y) && (y==z))
             {
               printf("\nEl triangulo es equilatero\n");
             }
             
             if(x=!y && y!=z)
             {
              printf("\nEl triangulo es escaleno\n");
             }
       
             if(x==z || y==z || x==y)
             {
                     if(x+y/2!=z || x+z/2!=y || y+z/2!=x)
                     {
                       printf("\nEl triangulo es isosceles\n");
                     }
                     
             }
             
            } //llave donde primer if cierra
            
            
  else//else primer if
    {
      printf("\nNo es un triangulo\n");
    }
 
  printf("El perimetro del triangulo es: %lf\n",perimetro);
  
  printf("El area del triangulo es: %lf\n",area);
 
system("pause");
}
