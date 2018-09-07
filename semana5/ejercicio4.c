/*Programa que convierte decimal a binario, creado por Paulina Sura Morales*/
#include<stdio.h> 
#include<math.h>
int main()
{
int residuo,decimal,div,n,r[50],c,i;
int opcion;
printf("Teclear una opcion\n");
printf("(1) para convertir de binario a decimal");
printf("(2) para covertir de decimal a binario");

scanf("%i",&opcion);

	
switch(opcion)
{
	case 1:
	   
	    div=0;
	    printf("Ingresa un numero binario:  ");
	    scanf("%d",&n);
	    i=0;
	    decimal=0;
	
        while(n!=0){
	     residuo=n%10;
	     n=n/10;
	     decimal=decimal+residuo*(pow(2,i));
	     i++;
                  }
       printf("\n  Tu numero decimal es :  %d",decimal);

    break;
   
   case 2:
	
	for(int k=0;k<50;k++){
	r[k]=0;
}

printf("Dame un numero: \t");
scanf("%d",&n);

	do
	{
		r[i]=n%2;
		n=n/2;
	i++;
	}
	while (n>0);

	for(int j=0;j<50;j++){
		printf("%d",r[49-j]);
}

return 0;
}}
		
   	



