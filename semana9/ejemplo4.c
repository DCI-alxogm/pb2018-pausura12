/*Programa creado por Paulina Sura Morales, el cual calcula el cuadrado de un numero usando funciones tipo int o float funcion() esto es para funciones sin argumentos de entrada pero con argumentos de salida*/

#include<stdio.h> //defino librerias

float cuadrado(){ //defino funcion
	float x,x2;
	printf("Introduce un numero: \n");
	scanf("%f",&x);
	x2=x*x;
	return x2;
	}
int main(){
	float p;
	p=cuadrado();
	printf("El cuadrado de este numero es=  %f\n",p);
	
	return 0;
	} 
	
