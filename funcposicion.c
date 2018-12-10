
#include<stdio.h>
#include<math.h>

int main ()
{

<<<<<<< HEAD
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
=======
int i,np=50;
float xi[np], vxi[np], h, t, x, y, yi[np], vyi[np], z, zi[np], vzi[np],f,F;
FILE* datos;
FILE* datos2;
FILE* datos3;	
FILE* posicionesN;

datos=fopen("datos.txt", "r");
fscanf(datos, "%f %f %f %f %f %f",&xi[0], &vxi[0], &yi[0], &vyi[0], &zi[0], &vzi[0]);
>>>>>>> 988835e5e375ebaa1e8bb309dc4ed11cc48439c6
	fclose(datos);

	datos2=fopen("constantes.txt", "r");
	fscanf(datos2, "%f %d", &h, &t);
	fclose(datos2);

<<<<<<< HEAD
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
=======
datos3=fopen("fuerzasN.txt", "r");
fscanf(datos3, "%f %f", &f, &F);
fclose(datos3);
	
posicionesN=fopen("posicionesN.txt","w");

for(i=0;i<1/*np*/;i++)
{
	x=(xi[i]*(t)+(h*vxi[i]*t)+((.5)*f[i]*(h*h))/(t+h));
	y=(yi[i]*(t)+(h*vyi[i]*t)+((.5)*f[i]*(h*h))/(t+h));
	z=(zi[i]*(t)+(h*vzi[i]*t)+((.5)*f[i]*(h*h))/(t+h));
}
>>>>>>> 988835e5e375ebaa1e8bb309dc4ed11cc48439c6

	fprintf(posicionesN,"%f\n %f\n %f\n", x,z,y);
	fclose(posicionesN);
	return 0;
}
