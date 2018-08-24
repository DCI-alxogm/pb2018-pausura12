/*Programa creado para conversion de coordenadas cartesianas a esfericas por Paulina Sura Morales el 20 de agosto del 2018*/

#include<stdio.h>
#include<math.h>


	int main()
{
	/*Definir variables*/
	float x,y,z,r,o,p,o1,p1;
	float x1,y1,z1,R,O,P;

	/*Ingresar variables*/
	printf("Ingrese una coordenada x:\n");
	scanf("%f",&x);
	printf("Ingrese una coordenada y:\n");
	scanf("%f",&y);
	printf("Ingrese una coordenada z:\n");
	scanf("%f",&z);
	
	/*Hacer operaciones*/
	r=sqrt((x*x)+(y*y)+(z*z));
	o=acos(z/r);
	p=atan(y/x);
	o1=o*57.296;
	p1=p*57.296;
	
	/*Imprime resultados a pantalla*/
	printf ("\n El valor para r es:%f",r);
	printf ("\n El valor para ϐ en grados es:%f",o1);
	printf ("\n El valor para φ en grados es:%f",p1);

	/*Ahora pasaremos de coordenadas esfericas a cartesianas*/
	x1=r*sin(o1)*cos(p1);
	y1=r*sin(o1)*sin(p1);
	z1=r*cos(o1);

	printf ("\n El valor de X es:%f",x1);
	printf ("\n El valor de Y es:%f",y1);
	printf ("\n El valor de Z es:%f",z1);

	



	return 0;
	
	
	

}
