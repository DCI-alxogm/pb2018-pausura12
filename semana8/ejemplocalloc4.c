//Programa creado por Paulina Sura Usando calloc
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num,i,*ptr,sum=0; //Defino variables
		
	printf("Introduce el numero de elementos: ");
	scanf("%d",&num);

	ptr=(int*)calloc(num,sizeof(int));

	if(ptr==NULL)
	{
	printf("Error! memoria NO reservada");
	exit(0);
	}
	printf("Introduce los elementos de el arreglo: ");
	for(i=0;i<num;++i)
	{
	scanf("%d",ptr+i);
	sum+=*(ptr+1);
	}
	printf("Sum=%d",sum);
	free(ptr);
	return 0;
	}
