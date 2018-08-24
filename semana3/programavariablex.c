/*Programa creado para recibir el valor de una variable x y evaluar por Paulina Sura Morales el20 de agosto del 2018*/

#include <stdio.h>
#include <math.h>

	int main (void)
{
	/*Definir variables*/
	float x,y1,y2,y3;

	/*Ingresar cantidades*/
	printf("Ingresa la variable x\n");
	scanf("%f",&x);

	/*Hacer operaciones*/
	y1=exp(-x);
	y2=cos(x)+2*tan(x/2);
	y3=log(x)+3*pow(x,2);

	/*Imprime resultados a pantalla*/
	printf("exp(-x)= %f\n",y1);
	printf("cos(x)+2*tan(x/2)=%f\n",y2);
	printf("log(x)+3*x²=%f\n",y3);

return 0;
}
	

