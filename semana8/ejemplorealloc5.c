//Programa creado por Paulina Sura Morales usando realloc
//Defino librerias
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,i,n1,n2; //Defino variables
	printf("Introduce el numero de elementos n1: ");
	scanf("%d",&n1);
	printf("\nIntroduce el nuevo numero de elementos n2: ");
	scanf("%d",&n2);
	ptr=(int*)malloc(n1*sizeof(int));

	printf("Direccion de la memoria reservada: "); //Imprimo a pantalla

	for(i=0;i<n1;++i){
	printf("%x\t",ptr+i);
	}
	ptr=realloc(ptr, n2);

	for(i=0;i<n2;++i){
	printf("%u\t",ptr+i);
	}
	free(ptr);//Libero memoria
	return 0;
	}


