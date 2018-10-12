/*Programa creado por Paulina Sura Morales, el cual calcula el promedio de una lista de datos dada*/

#include<stdio.h>//Agrego librerias
#include<stdlib.h>

	int main(){ //inicio

	FILE *datos;//le digo a mi programa que posteriormente creare un archivo
	int i;//DEFINO VARIABLES
	float sum=0, *ptr;//defino variables y añado apuntador

	datos=fopen("promedio.txt","r");//creo archivo de lectura

	ptr=(float*)calloc(267,sizeof(float));//apuntador, 267 corresponde al numero de datos que tengo

	for(i=0;i<267;i++){//ciclo

	fscanf(datos,"%f\n",ptr+1);//guardo valor
	
	sum+=*(ptr+i);//hago sumatoria

	}
	sum/=267;//saco promedio dividiendo mi suma entre el numero de datos

	printf("A partir de los datos, tu promedio es: %f\n",sum);//imprimo resultado

	free(ptr);//libero memoria
	fclose(datos);//cierro archivo

	return 0;//finalizo programa

	}
