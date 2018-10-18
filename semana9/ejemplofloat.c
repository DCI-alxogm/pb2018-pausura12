/*Programa creado por Paulina Sura Morales, el cual calcula el cuadrado de un numero usando argumentos de tipo float(con argumentos de entrada y salida)*/

#include<stdio.h> //Incluyo librerias

float cuadrado(float h); //Defino funcion
int main(){
	float x,x2; //Defino variables
	printf("Introduce un numero\n"); //Solicito un numero
	scanf("%f",&x);//Guardo el valor
	x2=cuadrado(x);  //Defino funcion
	printf("El cuadrado de %f es %f \n",x,x2); //Imprimo resultado
	return 0; //Finalizo
}
float cuadrado(float h){ //defino cuadrado
	return h*h;
}
