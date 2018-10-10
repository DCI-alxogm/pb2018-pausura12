/*Programa creado por Paulina Sura Morales, el cual calcula el cuadrado de un numero usando funciones tipo int o float funcion() esto es para funciones sin argumentos de entrada pero con argumentos de salida*/

#include<stdio.h> //defino librerias

void cuadrado(); //defino funcion
int main(){
	cuadrado();
	return 0;

	void cuadrado(float x);
float x,x2;
	printf("Introduce un numero \n"); //solicita valor
	scanf("%f",&x); //guarda valor
	x2=x*x; //desarrollo funcion
	printf("El cuadrado de %f es %f \n",x,x2); //imprime resultado
 }
float cuadrado(float h){ //defino cuadrado
	return h*h;
}
