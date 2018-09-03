/*Programa creado por Paulina Sura Morales*/

#include<stdio.h>

int main()
{

	
	
	float temp_C,temp_K;
	float Temp_C,final,delta;
	int n,i,t=0;
while(t==0){
	printf ("¿Que valor de Tempeartura en C quieres?");
	scanf("%i",&temp_C);
	printf ("¿Que valor de Tempeartura final quieres?");
	scanf("%i",&final);
	printf ("¿Que valor de n quieres?");
	scanf("%i",&n);
	
	delta=(final-Temp_C)/n;
	for(i=0;i<n;i++){
	
		temp_K=temp_C+273.15;
		printf("%f%f\n",temp_C,temp_K);
		temp_C=temp_C+delta;	//	temp_C+delta;
	}
printf ("¿quieres volver a repetir el proceso? Presiona 1 para si, 2 para no");
scanf("%i",&t);	
}
return 0;
}

