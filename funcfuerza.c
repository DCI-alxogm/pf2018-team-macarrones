#include<stdio.h>
#include<math.h>

int main()
{

int i, np=50;
float m,F,f,r;
float pi=3.1416;
float G=4*pow(pi,2);
FILE *datos;
FILE *fuerzasN;

datos=fopen("masa.txt", "r");
fscanf(datos, "%f ",&m);
printf("Prueba datos iniciales %f  \n",m);
fclose(datos);

printf("Introduce un radio entero deseado de la esfera: \n");
scanf("%i",&r);

fuerzasN=fopen("fuerzasN.txt","w+");


	f=-(G*(m*m)/pow(r,3));

fprintf(fuerzasN," %f\n ", f);

for(i=0; i<1/*np*/; i++)

{
	F=F+f;
}
fprintf(fuerzasN,"%f\n  ", F);
fclose(fuerzasN);
return 0;
}
