/*Programa creado por Paulina Sura Morales con el fin de calcular el factorial de un numero dado por el usuario, y que se pregunte si queremos hacer un nuevo calculo*/

#include<stdio.h>
int main()
{
	int a,i,c,x;
	printf ("Dame un numero por favor: \t");
	scanf("%d",&a);
	printf("\n\nSu factorial es: \n");

	printf("!%d=%d",a,a);
x=a;
c=a;
	for(i=2;i<=x;i++)
{
	c=c-1;
	a=a*c;
	printf("*%d",c);
}
printf("=%d",a);

return 0;
}
