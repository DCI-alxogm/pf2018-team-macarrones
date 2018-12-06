//Se inicia el proyecto de final de colision de galaxias el dia 28 de noviembre, integrantes: Haydeé Preciado y Mariana Herrera, se continuara en los dias siguientes

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
int p,r,np=400;                                                
float h,mp,t,m;
float F,xi[np],yi[np],zi[np],vxi[np],vyi[np],vzi[np];
float pi=3.1416;
float G=4*pow(pi,2);
FILE *datos;
FILE *datos2;

datos=fopen("constantes","r");
fscanf(constantes,"%f\n, %f\n, %f\n",&h,&mp,&t);
printf("Prueba datos iniciales %f\t %f\t %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\t  \n",mp,t,xi,yi,zi,vxi,vyi,vzi,h);
fclose(datos);

datos2=fopen("datos2.txt","w");


printf("Introduce un radio entero deseado de la esfera: \n");
scanf("%i",&r);

//Calcular la masa de cada galaxia
//Se hace un solo ciclo porque la masa de las particulas es la misma y la cantidad de particulas de cada esfera son las mismas

for(i=0; i<np; i++);
{
	m+=mp;
}	


//Calcular la fuerza gravitacional

F=-(G(m*m)/pow(r,3));



//Ciclo para poder calcular las nuevas posiciones y velocidades
for (p=0; p<np; p++);
{
	xi(t+h)=xi*(t)+h*vxi*(t)+(1/2)*F*pow(h,2);
	yi(t+h)=yi*(t)+h*vyi*(t)+(1/2)*F*pow(h,2);
	zi(t+h)=zi*(t)+h*vzi*(t)+(1/2)*F*pow(h,2);
}
for(p=0; p<np; p++);
{
	vxi(t+h)=vxi*(t)+1/2(F*(t)+F(t+h))*h;
	vyi(t+h)=vyi*(t)+1/2(F*(t)+F(t+h))*h;
	vzi(t+h)=vzi*(t)+1/2(F*(t)+F(t+h))*h;
}

fprintf(datos2,"%f,%f,%f,%f,%f,%f", xi, yi, zi, vxi, vyi, vzi); //Se imprimen los nuevos datos en un archivo separado
fclose(datos2);

return 0;
}
