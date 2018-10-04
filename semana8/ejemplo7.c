/*Programa creado por Paulina Sura Morales el cual encuentra la suma de 6 numeros guardados en un arreglo(uso de apuntador)*/

#include<stdio.h> //añado librerias a usar
int main()
{
	int i,num[6],sum=0; //declaro variables
	printf("Introduce 6 numeros enteros: \n");
	for(i=0;i<6;++i)
	{
	//(num+i)es equivalente a &num[i]
	scanf("%d",(num+i));

	//*(num+i) es equivalente a num[i]
	sum+=*(num+i);
	}
	printf("Suma=%d",sum);  //imprimo a pantalla
	return 0;//finalizo
	}
