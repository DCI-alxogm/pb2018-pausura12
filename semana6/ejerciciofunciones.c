//creado por Paulina Sura Morales 
#include<stdio.h>
#include<math.h>

#define PI 3.14159265

int main(void)
{
	float x;
	float e,l,s,c,r,val;
	FILE *fp;
fp=fopen("ejerciciofunciones.txt","w");
	printf("Dame un valor: \t");
	scanf("%f",&x);

	e=exp(x);
	l=log(x);

	val=PI/180;
	s=sin(x*val);
	c=cos(x*val);

	r=sqrt(x);

	fprintf(fp, "Exponencial = %f\n",e);
	fprintf(fp, "Logaritmo = %f\n",l);
	fprintf(fp, "Seno = %f\n",s);
	fprintf(fp, "Coseno = %f\n",c);
	fprintf(fp, "Raiz = %f\n",r);
	fprintf(fp, "\n");

	return 0;
fclose(fp);
}



