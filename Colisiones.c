/*Se inicia el proyecto de final de colision de galaxias el dia 28 de noviembre, integrantes: Haydeé Preciado y Mariana Herrera, se continuara en los dias siguientes*/

#include<stdio.h>
#include<math.h>
int main()
{
FILE *datos;
FILE *datos2;
int i;
float pi,G,F,r,x,y,z,vx,vy,vz,h,m,t;
pi=3.1416;
G=4*pow(pi,2);
datos=fopen("datos.txt","r");
scanf("%f",&m,&t,&x,&y,&z,&vx,&vy,&vz,&h);

/*for (j=0; j<10; j++);
{
	r=sqrt(pow(x2-x1,2)-pow(y2-y1,2)-pow(z2-z1,2));
}*/

for(i=0; i<10 ; i++);
{
	F=-(G(m*m)/pow(r,3));
}
printf("%f\n",r);
fclose(datos);

return 0;
}
