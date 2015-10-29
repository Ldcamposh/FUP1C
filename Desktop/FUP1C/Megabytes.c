//Programa que nos da la equivalencia de Megabytes a bits, bytes, kilobytes, gigabytes y terabytes.//

#include <stdlib.h>
#include<stdio.h>

float num;

float bits = 8388608;
long bytes = 1048576;
float kilobytes;
float gigabytes = 0.0009765626;
float terabytes = 0.00000095367;


long G;
long T;

int resultado;

int main ()

{
printf ("Insertar numero de megabytes");
scanf ("%d", &N1);

bits=8*1048576*N1;
bytes=1024*1024*N1;
kilobytes=1024*N1;
gigabytes=N1/1024;
terabytes=N1/1048576;
printf ("El resultado en bits es: %d\n",bits);
printf ("El resultado en bytes es: %d\n",bytes);
printf ("El resultado en kilobytes es: %d\n",kilobytes);
printf ("El resultado en gigabytes es: %d\n",gigabytes);
printf ("El resultado en terabytes es: %d\n",terabytes);
system ("pause");
}
