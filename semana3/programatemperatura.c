/*Programa creado para conversion de temperatura por Paulina Sura Morales el20 de agosto del 2018*/

#include <stdio.h>
#include <math.h>

	int main (void)
{
	/*Definir variables*/
	float C,K,F,C2;

	/*Ingresar cantidades*/
	printf("Escribe la temperatura en C°\n");
	scanf("%f",&C);

	/*Hacer operaciones*/
	K = C+273.15;
	F = (C*1.8) + 32;
	C2 = (F-32)/1.8;

	/*Imprime resultados a pantalla*/
	printf("Grados Kelvin %f\n",  K);
	printf("Grados Fahrenheit %f\n",  F);
	printf("Grados Celsius %f\n",  C2);

return 0;
}
	

