/*Programa creado por Paulina Sura Morales, el cual da el numero mayor de una lista de numeros en otro archivo*/

#include<stdio.h> //Agrego librerias
#include<stdlib.h>
int main() 
{
	int e,i; //defino variables en numeros enteros
	float M=0.0, *p; //defino variables en numros decimales
	FILE *info; //le aviso a mi programa que despues creare este archivo

	printf("¿Cuantos elementos vas a evaluar? \n"); //Imprimo a pantalla 
	scanf("%d",&e);//Guardo informacion proporionada por el usuario

	p=(float*)calloc(e,sizeof(int)); //uso apuntadores
	if(p==NULL) //Si despues de revisar es nulo imprimir a pantalla un error
	{
		printf("LO SIENTO, ¡ERROR! MEMORIA NO RESERVADA");
		exit(0);
	}
	
	info=fopen("num_maximo.txt","r");//CREE archivo de lectura

	for(i=0;i<e;i++) //inicio mi for
	{
	fscanf(info,"%f",p+1);//guardo informacion y a mi numero le agrego uno
	if(M<*(p+1)) //si mi numero es menor que el numero anterior guardado
	{
		M=*(p+1);//mi numero va a ser el que me arrojo despues de dar una revision 
	}
	}
	fclose(info);//cierro mi archivo

	printf("EL NUMERO MAXIMO DE TU LISTA ES: %f \n",M); //imprimo mi numero maximo
	free(p);//libero memoria
	return 0;//finalizo progrma
	}
