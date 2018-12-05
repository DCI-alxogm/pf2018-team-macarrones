//Se inicia el proyecto de final de colision de galaxias el dia 28 de noviembre, integrantes: Haydeé Preciado y Mariana Herrera, se continuara en los dias siguientes

#include<stdio.h>
#include<math.h>
int main()
{
FILE *datos;
FILE *datos2;
int i,r;
double np=20;                                                
float f,h,mp,t,m,R;
float Fx,Fy,Fz;
double xi,yi,zi,vxi,vyi,vzi;
float pi=3.1416;
float G=4*pow(pi,2);

datos=fopen("datos.txt","r");
fscanf(datos,"%f\t %f\t %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\t ",&mp,&t,&xi,&yi,&zi,&vxi,&vyi,&vzi,&h);
printf("Prueba datos iniciales %f\t %f\t %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\t  \n",mp,t,xi,yi,zi,vxi,vyi,vzi,h);
fclose(datos);

datos2=fopen("datos2.txt","w");


printf("Introduce un radio entero deseado de la esfera: \n");
scanf("%i", &r);

//Calcular la masa de cada galaxia
//Se hace un solo ciclo porque la masa de las particulas es la misma y la cantidad de particulas de cada esfera son las mismas

for(i=0; i<np; i++);
{
	m+=mp;
}	


//Calcular la fuerza gravitacional

f=-(G(m*m)/pow(r,3));



//Ciclo para calcular la distancia de la galaxia
/*for(i=0; i<np; i++);
{
 	
	R=pow(-G*(m*m)/F,1/3);
	
}
*/

//Ciclo para poder calcular la nueva posicion y la nueva velocidad
for (i=0; i<np; i++);
{
	xi(t+h)=xi*(t)+h*vxi*(t)+(1/2)*Fx*pow(h,2);
	yi(t+h)=yi*(t)+h*vyi*(t)+(1/2)*Fy*pow(h,2);
	zi(t+h)=zi*(t)+h*vzi*(t)+(1/2)*Fz*pow(h,2);
}
for(i=0; i<np; i++);
{
	vxi(t+h)=vxi*(t)+1/2(Fx*(t)+Fx(t+h))*h;
	vyi(t+h)=vyi*(t)+1/2(Fy*(t)+Fy(t+h))*h;
	vzi(t+h)=vzi*(t)+1/2(Fz*(t)+Fz(t+h))*h;
}

fprintf(datos2,"%f,%f,%f,%f,%f,%f", xi, yi, zi, vxi, vyi, vzi); //Se imprimen los nuevos datos en un archivo separado
fclose(datos2);

return 0;
}
