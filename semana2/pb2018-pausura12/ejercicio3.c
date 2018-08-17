/*Programa para ejercicio 3 con numeros decimales calculando varias incognitas, creado el 16 de agosto por Paulina Sura Morales*/

#include <stdio.h>

int main (void)

{	/*Definir variables*/
	float a,b,c,d,e1,e2,e3,e4;

	/*Ingresar variables*/
	printf ("Escribe el primer numero\n");
	scanf ("%f", &a);
	
	printf ("Escribe el segundo numero\n");
	scanf ("%f", &b);

	printf ("Escribe el tercer numero\n");
	scanf ("%f", &c);
	
	printf ("Escribe el cuarto numero\n");
	scanf ("%f", &d);

	/*Hacer operaciones*/
	e1 = (a + b) * c / d;
	e2 = ((a + b) * c) /d;
	e3 = (a + b) * c / d;
	e4 = a + (b * c) / d;

	/*Imprime resultados a pantalla*/
	printf ("El resultado de tu primer operacion es %f \n", e1);
	printf ("El resultado de tu segunda operacion es %f \n", e2);
	printf ("El resultado de tu tercer operacion es %f \n", e3);
	printf ("El resultado de tu cuarta operacion es %f \n", e4);

	return 0;
	
	
	

}
