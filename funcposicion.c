
#include<stdio.h>
#include<math.h>

int main ()
{

	int i,np=100,t;
	float xi[np], yi[np], zi[np], vxi[np], vyi[np], vzi[np];
	float fxi= 10.5, fyi=20.7, fzi= 32.7;
	float x, y, z, h;
	FILE* datos;
	FILE* datos2;
	FILE* datos3;
	FILE* posicionesN;

	datos=fopen("esferasN.txt", "r");
	fscanf(datos, "%f %f %f ",&xi[np], &yi[np], &zi[np]);
	fclose(datos);

	datos2=fopen("constantes.txt", "r");
	fscanf(datos2, "%f %d", &h, &t);
	fclose(datos2);

	datos3=fopen("velocidadedN.txt","r");
	fscanf(datos3, "%f %f %f", &vxi[np], &vyi[np], &vzi[np]);
	fclose(datos3);

	posicionesN=fopen("posicionesN.txt","w");

	for(i=0;i<np;i++)
	{
		x=(xi*(t)+(h*vxi*t)+((.5)*fxi*(h*h))/(t+h));
		y=(yi*(t)+(h*vyi*t)+((.5)*fyi*(h*h))/(t+h));
		z=(zi*(t)+(h*vzi*t)+((.5)*fzi*(h*h))/(t+h));
	}

	fprintf(posicionesN,"%f\n %f\n %f\n", x,z,y);
	fclose(posicionesN);
	return 0;
}
