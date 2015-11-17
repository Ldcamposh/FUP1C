/*
Programa que suma y divide
*/

#include<stdio.h>

int N1;
int N2;
float div;

int resultado;

int main()
{//Inicio

printf("Dame el primer numero:");
scanf(".2%f", &N1);
printf("Dame un numero sobre el que dividir:");
scanf(".2%f", &N2);
resultado = N1/ N2;
printf("El resultado es: %d / %d resulta: %d\n",N1,N2,resultado);
}//Fin
