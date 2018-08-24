/*programa hecho por Paulina Sura Morales, el cual indica si es vocal mayuscula o minuscula*/
	#include<stdio.h>
	int  main()
	{
	char c;
	int es_vocalminuscula, es_vocalmayuscula;
/*Imprime a pantalla*/
	printf("Introduce una letra: \n");
	scanf("%c", &c);
	es_vocalminuscula = (c == 'a' || c == 'e' || c == 'i' || c== 'o' 	|| c== 'u');
	es_vocalmayuscula = (c == 'A' || c == 'E' || c == 'I' || c== 'O' 	|| c== 'U');
/*Añade el condicional*/
	if (es_vocalmayuscula || es_vocalminuscula){
/*Imprime a pantalla*/
	printf("%c es una vocal\n", c);
/*Ingresa otra instruccion*/
	} else{
/*Imprime a pantalla*/
	printf("%c es consonante\n", c);
	}
	return 0;
	}
