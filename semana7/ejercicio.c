/*Programa creado por Paulina Sura Morales*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main
{
	int p,N,nsum, i;
	float a,b,deltax;
	FILE *fp;

	fp=fopen("parametros.txt","r");
	fscanf(fp,"%i %f %f %i %i",&p,&a,&b,&N,&nsum);
	printf("%i %f %f %i %i\n",p,a,b,N,nsum);
	fclose(fp);
	float x[N],fx[N],intx[N];

	if(p<0){
	printf("La potencia es negativa\n");
	return 1;
}
	for(i=0;i<N,i++){
		x[i]=0.;
		fx[i]=0.;
		intx[i]=0.;
}

	for(i=0;i<N;i++){
	x[i]=0.;
	fx[i]=0.;
	intx[i]=0.;
}
	deltax=(b-a)/N;
	printf("%f\n",deltax);
	fx[i]=pow(x[i],p);

	fa=pow(a,p);

	for(i=0;i<=N;i++){
	h=(x[i]-a)/nsum;
	suma=0;
	for(j=1;j<nsum;j++){
	suma=suma+pow(x[i]+h*j);

}

}

fp=fopen("Resultado.txt","w");
fprintf(fp, "x f(x) int(x)\n");
for(i=0;i<N;i++){
	fprintf(fp,"%f %f %f\n",x[i],fx[i],intx[i]);
}
fclose(fp);
return 0;
}
