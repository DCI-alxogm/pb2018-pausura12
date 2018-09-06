/*Programa que convierte decimal a binario, creado por Paulina Sura Morales*/
#include<stdio.h> 
int main()
{
	int n,r[50],c;
	int i=0;
	
	for(int k=0;k<50;k++){
	r[k]=0;
}

printf("Dame un numero: \t");
scanf("%d",&n);

	do
	{
		r[i]=n%2;
		n=n/2;
	i++;
	}
	while (n>0);

	for(int j=0;j<50;j++){
		printf("%d",r[49-j]);
}

return 0;
}
		
		

