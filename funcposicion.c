
#include<stdio.h>
#include<math.h>

int main ()
{

int i,np=50;
float xi[np], vxi[np], fxi[np], h, t, x, y, yi[np], vyi[np], fyi[np], z, zi[np], vzi[np], fzi[np];
FILE* datos;
FILE* datos2;
FILE* posicionesN;

datos=fopen("datos.txt", "r");
fscanf(datos, "%f %f %f %f %f %f %f %f %f",&xi[0], &vxi[0], &fxi[0], &yi[0], &vyi[0], &fyi[0], &zi[0], &vzi[0], &fzi[0]);
	fclose(datos);

datos2=fopen("constantes.txt", "r");
fscanf(datos2, "%f %f", &h, &t);
fclose(datos2);

posicionesN=fopen("posicionesN.txt","w");

for(i=0;i<1/*np*/;i++)
{
	x=(xi[i]*(t)+(h*vxi[i]*t)+((.5)*fxi[i]*(h*h))/(t+h));
	y=(yi[i]*(t)+(h*vyi[i]*t)+((.5)*fyi[i]*(h*h))/(t+h));
	z=(zi[i]*(t)+(h*vzi[i]*t)+((.5)*fzi[i]*(h*h))/(t+h));
}

fprintf(posicionesN,"%f\n %f\n %f\n", x,z,y);
fclose(posicionesN);
return 0;
}
