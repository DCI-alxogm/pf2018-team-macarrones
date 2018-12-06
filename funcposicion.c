
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main ()
{

int i,np=50; 
float xi[np], vxi[np], fxi[np], h[np], t[np], x[np], y[np], yi[np], vyi[np], fyi[np], z[np], zi[np], vzi[np], fzi[np];
FILE* datos;
FILE* datos2;
FILE* posicionesN;

datos=fopen("datos.txt", "r");
fscanf(datos, "%f,%f,%f,%f,%f,%f,%f,%f,%f",&xi,&vxi,&fxi,&yi,&vyi,&fyi,&zi,&vzi,&fzi);
fclose(datos);

datos2=fopen("constantes.txt", "r");
fscanf(datos2, "%f, %f", &h, &t);
fclose(datos2);

posicionesN=fopen("posicionesN.txt","w");

for(i=0;i<np;i++);
{
	
	x=(xi*(t)+(h*vxi*t)+((1/2)*fxi*(h*h))/(t+h));
	y=(yi*(t)+(h*vyi*t)+((1/2)*fyi*(h*h))/(t+h));
	z=(zi*(t)+(h*vzi*t)+((1/2)*fzi*(h*h))/(t+h));
}

fprintf(posicionesN,"%f\n", &x,&z,&y);
fclose(posicionesN);
return 0;
}
