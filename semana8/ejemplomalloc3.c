/*Programa creado por Paulina Sura Morales el 3 de octubre de 2018, aplicando el ejemplo malloc*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num,i,*ptr,sum=0;
	ptr=(int*)malloc(num*sizeof(int));//memoria reservada

	printf("Introduce el numero de elementos: ");
	scanf("%d",&num);

	if(ptr==NULL)
	{
	printf("Error! memoria no reservada.");
	exit(0);
	}

	printf("Introduce los elementos del arreglo: ");
	for(i=0;i<num;++i)
	{
	scanf("%d",ptr+i);
	sum+=*(ptr+i);
	}
	printf("Sum=%d",sum);
	free(ptr);
	return 0;
	}

