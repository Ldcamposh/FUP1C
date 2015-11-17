//Programa que nos da la equivalencia de Megabytes a bits, bytes, kilobytes, gigabytes y terabytes.//

#include<stdio.h>

float num;

int bits;
int bytes;
int kilobytes;
int megabytes;
float gigabytes;
float terabytes;

int main ()

{
printf ("Insertar numero de megabytes");
scanf ("%f", &num);

bits=8*1048576*num;
bytes=1024*1024*num;
kilobytes=1024*num;
megabytes=1*num;
gigabytes=(float)num/1024;
terabytes=(float)num/1024/1024;
printf ("El resultado en bits es: %f\n",bits);
printf ("El resultado en bytes es: %d\n",bytes);
printf ("El resultado en kilobytes es: %f\n",kilobytes);
printf ("El resultado en megabytes es: %f/n",megabytes);
printf ("El resultado en gigabytes es: %f\n",gigabytes);
printf ("El resultado en terabytes es: %l\n",terabytes);
}
