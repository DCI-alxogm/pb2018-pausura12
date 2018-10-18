//Programa creado por Paulina Sura Morales el 3 de octubre utilizando apuntadores
#include<stdio.h>
#include<stdlib.h>//añado librerias
int main()
{
	int *ptr,i,n1,n2;  //defino variables
	printf("Introduce el numero de elementos n1: "); //imprimo a pantalla n1
	scanf("%d",&n1); //guardo el valor dado
	printf("\nIntroduce el nuevo numero de elementos n2:"); //solicito el valor de n2
	scanf("%d",&n2);//guardo el valor
	ptr=(int*)malloc(n1*sizeof(int));//apuntador

	printf("Direccion de la memoria reservada: ");//doy el espacio de la memoria reservada

	for(i=0;i<n1;++i){
	printf("%x\t",ptr+i);

	}
	ptr=realloc(ptr,n2);//apuntador

	for(i=0;i<n2;++i){
	printf("%u\t",ptr+i);
	}
	free(ptr);//libero memoria
	return 0;//finalizo programa
	}
