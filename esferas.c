#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
<<<<<<< HEAD
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
=======

int main()
{
int num;
FILE* datos;
datos=fopen("cooresferas.txt", "w");
srand(time(NULL));
num=rand()%51;
fprintf(datos, "%d\n", num);
fclose(datos);
>>>>>>> 988835e5e375ebaa1e8bb309dc4ed11cc48439c6
return 0;

}
//falta acomodar las particulas para poder generar las esferas 
