/*Se inicia el proyecto de final de colision de galaxias el dia 28 de noviembre, integrantes: Haydeé Preciado y Mariana Herrera, se continuara en los dias siguientes*/

#include<stdio.h>
#include<math.h>
int main()
{
FILE *datos;
FILE *datos2;
int i,j;
int n=20;
float F,r,h,m,t;
float xi,yi,zi,vxi,vyi,vzi,Fx,Fy,Fz;
float pi=3.1416;
float G=4*pow(pi,2);

printf("Ingrese el radio de su preferencia para la esfera: \n");
scanf("%i",&r);

datos=fopen("datos.txt","r");
scanf("%f",&m,&t,&xi,&yi,&zi,&vxi,&vyi,&vzi,&h);

 for (j=0; j<n ;j++);
{
	xi=((r)*(x*cos(18)));
	yi=((r)*(y*sin(18)));
	printf("%f",&xi,&yi);
}

	/*r=sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2));*/

/*
for(i=0; i<10 ; i++);
{
 	
	F=-(G(m*m)/pow(r,3));
}
*/

/*Ciclo para poder caclular la nueva posicion y la nueva velocidad*/
for (m=0, m<p, m++);{
	xi(t+h)=xi(t)+h*vxi(t)+1/2*Fx*pow(h,2);
	yi(t+h)=yi(t)+h*vyi(t)+1/2*Fy*pow(h,2);
	zi(t+h)=zi(t)+h*vzi(t)+1/2*Fz*pow(h,2);
}


printf("%f\n",r);
fclose(datos);

return 0;
}
