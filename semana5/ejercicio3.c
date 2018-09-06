/*Programa hecho por Paulina Sura Morales el cual imprime a pantalla todos los numeros primos que hay en un intervalo dado*/
#include<stdio.h>

int main(void)
{
	int a,b,i,c;

	printf("NUMEROS PRIMOS EN UN RANGO DADO\n");
	printf("Limite inferior:\t");
	scanf("%d",&a);
	printf("Limite superior:\t");
	scanf("%d",&b);

	printf("\n\n");
	
	c=a;
	for	(i=c;i<=b;i++)
{

		if(a==2)
		{
			printf("%d",a);
		}
		else
		{
			if(a==3)
			{
				printf("%d",a);
			}
			else
			{
		}
			if(0==a%2)
			{

			}
			else
			{
				if(0==a%3)
				{

				}
				else
				{
					printf("%d",a);
				}
			}
		}
	a=a+1;
}
return 0;
}







