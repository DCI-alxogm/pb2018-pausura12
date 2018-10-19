
#include<stdio.h> //defino librerias
#include<stdlib.h>

float cuadrado(float x);
int main(int argc, char *argv[]){
	float p,a;
	if(argc==2){
		a=atof(argv[1]);
		p=cuadrado(a);
		printf("El cuadrado de tu valor es: %f", p);
		} 
	else if(argc>2){
		printf("Más argumentos de los necesarios\n");
		}
	else{
	printf("Faltan argumentos\n");
	}
	return 0;
}
