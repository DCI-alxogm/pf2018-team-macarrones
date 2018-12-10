#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
//codigo para poder sacar coordenadas en las dimensiones x,y,z aleatoriamente 
int main()
{
	int x,y,z;
	int n=100;
	FILE* datos;
	srand(time(NULL));
	datos=fopen("esferasN.txt", "w");
	for(int i=0; i<n; i++)
	{
		x=rand()%100;
		y=rand()%100;
		z=rand()%100;
		fprintf(datos, "%d,%d,%d\n", x,y,z);	
	}
	fclose(datos);
return 0;

}
//falta acomodar las particulas para poder generar las esferas 
