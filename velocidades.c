#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
//codigo para sacar las velocidades inciales aleatorias
int main()
{
	int vxi, vyi, vzi;
	int n=100;
	FILE* datos;
	srand(time(NULL));
	datos=fopen("velocidadesN.txt","w");
	for(int i=0; i<n; i++){
		vxi=rand()%100;
		vyi=rand()%100;
		vzi=rand()%100;
		fprintf(datos, "%d, %d, %d\n", vxi, vyi, vzi);
	}
	fclose(datos);
return 0;
}
