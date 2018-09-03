/*Programa creado por Paulina Sura Morales el 3 de septimbre de 2018 en el que es posible hacer ciclos por anidados(uno dentro de otro)*/

#include<stdio.h>
#include<math.h>

int main()
{
	float res;
	int n=3,k,j;

	for(j=0;j<n;j++){
	for(k=0;k<n;k++){
		res=j*k*1.0;
		printf("%i%i%f\n",j,k,res);
}
}
return 0;
}

	
