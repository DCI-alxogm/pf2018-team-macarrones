#include<stdio.h>
#include<math.h>

int main()
{

int i, np=50;
float xi[np] ,vxi[np],fxi[np],h,t,x[np],yi[np] ,vyi[np],fyi[np], y[np],zi[np] ,vzi[np],fzi[np], z[np], vxf,vyf,vzf;
FILE* datos;
FILE* datos2;
FILE *velocidadesN;

datos=fopen("datos.txt", "r");
fscanf(datos, "%f %f %f %f %f %f %f %f %f",&xi[0], &vxi[0], &fxi[0], &yi[0], &vyi[0],&fyi[0], &zi[0], &vzi[0],&fzi[0]);
printf("Prueba datos iniciales %f %f %f %f %f %f %f %f %f  \n",xi[0], vxi[0], fxi[0], yi[0], vyi[0],fyi[0], zi[0], vzi[0],fzi[0]);
datos2=fopen("constantes.txt", "r");
fscanf(datos2, "%f %f", &h, &t);
printf("Prueba datos iniciales %f %f  \n",h,t);
fclose(datos);
printf("\n%f %f\n", h, t);

velocidadesN=fopen("velocidadesN.txt","w");

for(i=0; i<1/*np*/; i++)

{
	vxf=(vxi[i]*(t)+.5*(fxi[i]*(t)+fxi[i]*(t+h))*h)/(t+h);
	vyf=(vyi[i]*(t)+.5*(fyi[i]*(t)+fyi[i]*(t+h))*h)/(t+h);
	vzf=(vzi[i]*(t)+.5*(fzi[i]*(t)+fzi[i]*(t+h))*h)/(t+h);
}
fprintf(velocidadesN,"%f\n %f\n %f\n", vxf, vyf, vzf);
fclose(velocidadesN);
return 0;
}
