/*Programa creado por Paulina Sura Morales el 3 de septiembre usando for*/

#include<stdio.h>
#include<math.h>

int main()
{
	float exp_;
	int n=10,j;

	for(j=0;j<n;j++){
		exp_=exp(j);
		printf("%i\t%f\n",j,exp_);
}
return 0;
}

