//Programa creado por Paulina Sura Morales el 3 de octubre usando apuntadores

#include<stdio.h>
int main(){
	int var=20; //Declaracion de variable
	int *ip; //Declaracion de la variable apuntador
	ip=&var; //Asigna la direccion de la varianle var al apuntador ip

	printf("La direccion de la variable var es: %x\n",(int)&var);
	printf("Direccion guardada en el apuntador ip: %x\n",(int)ip);
	printf("El valor de *ip: %d\n", *ip);
	return 0;
	}
