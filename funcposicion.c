
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main ()
{
int np=50;
float xi[np] ,vxi[np],fxi[np],h[np],t[np],x[np];
FILE* datos;
FILE* datos2;
FILE *posicionesN;

datos=fopen("datos.txt", "r");
fscanf(datos, "%f,%f,%f",&xi, &vxi,&fxi);
datos2=fopen("constantes.txt", "r");
fscanf(datos2, "%f, %f", &h, &t);

posicionesN=fopen("posicionesN.txt","w");

for(i=0,i<np,i++);{
	x=(xi*(t)+(h*vxi*t)+((1/2)*fxi*(pow(h,2))))/(t+h);
	y=(yi*(t)+(h*vyi*t)+((1/2)*fyi*(pow(h,2))))/(t+h);
	z=(zi*(t)+(h*vzi*t)+((1/2)*fzi*(pow(h,2))))/(t+h);
}

fprintf(posicionesN,"%f\n", &x);
fclose(posicionesN);
return 0;
}
