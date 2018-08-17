/*Programa para ejercicio 2 calculando varias incognitas, creado el 16 de agosto por Paulina Sura Morales*/

#include <stdio.h>

int main (void)

{	/*Definir variables*/
	int a,b,c,d,e1,e2,e3,e4;

	/*Ingresar variables*/
	printf ("Escribe el primer numero entero\n");
	scanf ("%i", &a);
	
	printf ("Escribe el segundo numero entero\n");
	scanf ("%i", &b);

	printf ("Escribe el tercer numero entero\n");
	scanf ("%i", &c);
	
	printf ("Escribe el cuarto numero entero\n");
	scanf ("%i", &d);

	/*Hacer operaciones*/
	e1 = (a + b) * c / d;
	e2 = ((a + b) * c) /d;
	e3 = (a + b) * c / d;
	e4 = a + (b * c) / d;

	/*Imprime resultados a pantalla*/
	printf ("El resultado de tu primer operacion es %i \n", e1);
	printf ("El resultado de tu segunda operacion es %i \n", e2);
	printf ("El resultado de tu tercer operacion es %i \n", e3);
	printf ("El resultado de tu cuarta operacion es %i \n", e4);

	return 0;
}
	
	
	
