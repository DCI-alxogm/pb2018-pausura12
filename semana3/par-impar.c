/*Programa creado para saber si un numero es par o impar. Hecho por Paulina Sura Morales el 24 de agosto de 2018*/

#include<stdio.h>

int main()
{
	int a;
/*Imprime a pantalla la instruccion*/
	printf("Introduce un numero\n");
	scanf("%i",&a);
/*Ingresa el condicional if*/
	if(a%2==0){
/*Imprime a pantalla*/
	printf("a=%i es par\n",a);
	}else{
/*Imprime a pantalla*/
	printf("a=%i es impar\n",a);
}
return 0;
}


