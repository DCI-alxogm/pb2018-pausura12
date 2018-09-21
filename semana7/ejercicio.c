/*Programa creado por Paulina Sura Morales el 21 de septiembre, el cual lee de un archivo la potencia de la funcion x a la p*/

#include <stdio.h>
#include <math.h>
int main (){
	
	FILE *fp;
	float A,b,B,h,xi,xf,f,v;
	int i,p,n;
	A=0;
	printf("Bienvenido, dame una potencia: \n ");
	scanf("%d",&p);
	if(p<=0)
	{
	printf("Tu numero es negativo, por favor dame otra potencia: ");
	return 1;
	}	printf("Proporciona una x inicial : \n ");
	scanf("%f",&xi);
	printf("Ahora dame una x final (NOTA: mas grande que la anterior): \n ");
	scanf("%f",&xf);
	if(xi>xf){
		printf("Tu x inicial resulta ser mas grande que la x final");
		return 1;
	}
	printf("¿Cuantas veces se va a evaluar? \n");
	scanf("%d",&n);
	h=(xf-xi)/n;
	fp=fopen("Resultados.txt","w");
	for(i=1;i<=n;i++){
		f=xi;
	b=pow(f,p);
	B=pow(f+(i*h),p);
	A=A+((b+B)*h)/2;
	v=h*i;
	fprintf(fp,"%d.-\t X=%f\t F(X)=%f ^ %i\t I(X)=%f\t  \n",i,v,B,p,A);
	b=B;
	}
	fclose(fp);	
	
	return 0;
}

