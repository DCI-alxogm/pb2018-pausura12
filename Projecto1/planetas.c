/*Programa creado por Paulina Sura Morales, el cual a partir de otro archivo toma los valores y los usa para realizar cálculos y posteriormente al traficarlo se podran visualizar las órbitas de todos lo planetas*/

//incluyo librerias
#include <stdio.h>
#include <math.h>


int main(){
//asignar archivos que posteriormente generare
	
	FILE *datos;
	FILE *puntos;
	char var[255];
	double x0,y0,z0,me,TE,h,mp,vx,vy,vz,G,r; //defino variables
	float i; int n, nPlan = 8;
	datos=fopen("datos.txt","r");//abro archivo de lectura
	puntos=fopen("Puntos.txt","w");//genero archivo de escritura
	for(n=0;n<=nPlan;n++){
//tomar datos del archivo base
		fscanf(datos," %s ", &var);
		fscanf(datos,"%lf	%lf	%lf	%lf	%lf	%lf",&x0,&y0,&z0,&vx,&vy,&vz);
		fscanf(datos,"%lf	%lf	%lf	%lf",&me,&TE,&h,&mp);
		G=4.0*pow(3.14159265359,2);//defino el valor de gravedad 
		vx*=365.242; //Ajuste de unidades a AU/year 
		vy*=365.242;
		vz*=365.242;
	
		for(i=0.0;i<=TE+h;i+=h){
			x0+=vx*h;//hago cálculos para posiciones
			y0+=vy*h;
			z0+=vz*h;
		
			r = sqrt(x0*x0 + y0*y0 + z0*z0);  //calculo radio de distancia entre planetas
		
			vx-=h*((G*me*x0)/pow(r,3));//calculo velocidades en diferentes puntos
			vy-=h*((G*me*y0)/pow(r,3));
			vz-=h*((G*me*z0)/pow(r,3));
		
			fprintf(puntos,"%lf	%lf	%lf	%lf	%lf	%lf	%f\n",x0,y0,z0,vx,vy,vz,i); //impresio de resultados
						
		}
		
		
	}
	fclose(datos);//ciero archivos
	fclose(puntos);


	return 0;
}

