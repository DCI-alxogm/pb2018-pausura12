/*Programa creado por Paulina Sura Morales, el cual evalua diferentes funciones*/
#include<stdio.h>
#include<math.h>

#define PI 3.14159265

int main(void)
{
	float x;
	float e,l,s,c,r,val;

	printf("Dame un valor: \t");
	scanf("%f",&x);

	e=exp(x);
	l=log(x);

	val=PI/180;
	s=sin(x*val);
	c=cos(x*val);

	r=sqrt(x);

	printf("Exponencial = %f\n",e);
	printf("Logaritmo = %f\n",l);
	printf("Seno = %f\n",s);
	printf("Coseno = %f\n",c);
	printf("Raiz = %f\n",r);

	printf("\n");
	return 0;
}
	

