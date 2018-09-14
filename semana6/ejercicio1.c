/*Programa creado por Paulina Sura Morales el cual solicita informacion de un numero pre-determinado de estudaintes*/

#include<stdio.h>

int main(){
int j,n;
float numeros[10];


for(j=0;j<10;j++){
printf("Dame la edad: \n");
scanf("%f",&numeros[j]);
}
for(j=0;j<10;j++){
printf("Dime el sexo (0:hombre)(1:mujer)\n");
scanf("%f",&numeros[j]);


}
return 0;
}



