#include<stdio.h>

int main()
{
FILE *datos;

                                             
float h,mp,t;
double xi,yi,zi,vxi,vyi,vzi;


datos=fopen("datos.txt","r");
fscanf(datos,"%f\t %f\t %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\t ",&mp,&t,&xi,&yi,&zi,&vxi,&vyi,&vzi,&h);
printf("Prueba datos iniciales %f\t %f\t %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\t  \n",mp,t,xi,yi,zi,vxi,vyi,vzi,h);
fclose(datos);

return 0;
}
