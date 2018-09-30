/*Programa creado por Paulina Sura Morales, el cual consiste en que a partir de los datos de otro archivo previamente creado los ude en para generar los reultados en otro, sirve para calcular puntos de la orbita de cada planeta, en este caso es el planeta mercurio*/

#include <stdio.h>
#include <math.h>

int main(){
	
FILE *datos;
FILE *puntos;
//char var[255];

//DEFINIR VARIABLES
double x0,y0,z0,me,TE,h,mp,vx,vy,vz,G,r;
float i;

//CREAR ARCHIVO DE LECTURA
datos=fopen("Mercurio.txt","r");
//TOMAR LOS DATOS QUE USAREMOS POSTERIORMENTE DE NUESTRO ARCHIVO DE LECTURA
fscanf(datos,"%lf	%lf	%lf	%lf	%lf	%lf",&x0,&y0,&z0,&vx,&vy,&vz);//DATOS FILA 1
fscanf(datos,"%lf	%lf	%lf	%lf",&me,&TE,&h,&mp);//DATOS FILA 2
fclose(datos);//CERRAMOS ARCHIVO
G=4.0*pow(3.14159265359,2); //DAMOS VALOR A Gravedad
vx*=365.242; //Ajuste de unidades a AU/year  //HACEMOS UN AJUSTE PARA TRABAJAR EN LAS MISMAS UNIDADES
vy*=365.242;
vz*=365.242;

//CREO ARCHIVO DE ESCRITURA
puntos=fopen("Puntos.txt","w");

//ARREGLO MIS VALORES PARA CUANO TIEMPO VALE 0, i menor igual que tiempo estimado y hasta que sea igual a h
for(i=0.0;i<=TE+h;i+=h){
	x0+=vx*h;   //calculo de posiciones en x,y,z
	y0+=vy*h;
	z0+=vz*h;

	r = sqrt(x0*x0 + y0*y0 + z0*z0);//calculo de la distancia-radio

	vx-=h*((G*me*x0)/pow(r,3)); //calculo de velocidades en x,y,z
	vy-=h*((G*me*y0)/pow(r,3));
	vz-=h*((G*me*z0)/pow(r,3));

	fprintf(puntos,"%lf	%lf	%lf	%lf	%lf	%lf	%f\n",x0,y0,z0,vx,vy,vz,i);
	//impresion de resultados
}



fclose(puntos);


	return 0;
}

