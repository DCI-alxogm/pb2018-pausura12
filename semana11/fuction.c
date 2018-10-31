//Programa creado por Paulina Sura Morales
//USO DE TEMPERATURAS
#include<stdio.h>
#include<stdlib.h>

void fuction(void){
	/*Donde izq es el lado izquierdo, right es el lado derecho, up es el lado superior y abajo es el lado de inferior*/
	float e,p,izq,right,up,abajo,temp;
	int N,n,i,j,a,x,y;
	p=1;
	N=0;
	FILE *temperaturas;
	FILE *datos_obtenidos;
	FILE *placaini;	
/*leer del archivo la temperatura de los bordes,numero de puntos a usar en la aproximaciÛn*/
	temperaturas=fopen("info.txt","r");
	

/*se escanean los datos dados en un archivo (temperaturas bordes) */	
fscanf(temperaturas,"%f %f %f %f %f %i",&izq,&right,&up,&abajo,&e,&n);

	fclose(temperaturas);  /*Se termina de leer el archivo y se cierra*/
	// A = matriz
	double **A =malloc(n*sizeof(float*));//Creacion de la matriz de dos dimenciones y la asignacion de memoria dinamica para el tamaÒo de la matriz

	for(x=0;x<=n;x++){
	   A[x]=(double*)malloc(n*sizeof(float));// formato de la matriz
	}	

	datos_obtenidos=fopen("inicial.txt","p");
	for(x=0;x<n;x++){
			for(y=0;y<n;y++){ 	//creacion de dos ciclos anidados para poder realizar la matriz y obtener los valores de la placa inicial 

				if(x==0)
				A[x][y]=izq;
				else if(x==(n-1)){
				A[x][y]=right;}
				
				else if(y==0)
				A[x][y]=up;
				
				else if(y==(n-1))
				A[x][y]=abajo;
				
				else
				A[x][y]=0;
	            	fprintf(placaini,"%3.3lf \t",A[x][y]); /*Resultados Placa Inicial*/
			}
	 fprintf(placaini,"\n"); /* Colocamos un salto de pagina para moldear la matriz*/
	}
		
				
fclose(placaini);//se cierra el archivo de escritura de la placa inicial

for(a=0;a<12;a++){
	char name[10]={'P', 'A', 'U', 'L', 'I', 'N', 'S', 'M', 'O', 'R'}; //Nombres de los archivos que se van a crear 
	name[1]=name[1]+a;
	datos_obtenidos=fopen(name,"p");//se abre el archivo de escritura para los diferentes archivos de resultados de las iteraciones

	for(x=1;x<=n-1;x++){//ciclo para el vector i (x)
			for(y=1;y<=n-1;y++){ /*Creacionn de las placas mediante un ciclo anidado*/

				A[x][y]=((A[x-1][y]+A[x+1][y]+A[x][y-1]+A[x][y+1])/4);//formula de la ecuacion del metodo de Gauss-Seidel de metodo numericos
					
				fprintf(datos_obtenidos,"%3.3lf\t",A[x][y]);//se almacenan los datos en los archivos creados anteriormente 
			}}
	fprintf(datos_obtenidos,"\n");
	fprintf(datos_obtenidos,"\n");
}
	


	fclose(datos_obtenidos);//cerrar los archivos	
free(A);//se libera la memoria 

/*end programa*/}

