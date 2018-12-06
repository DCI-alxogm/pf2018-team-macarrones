#include <stdlib.h>
#include <time.h>
#include<stdio.h>

int main()
{
int i,num=rand();

FILE* datos;

datos=fopen("esferasN.txt","w");
srand(time(NULL));
for(i=0; i<10; i++)
{
	num=rand()%100;
}

fprintf(datos,"%f\n",num);
fclose(datos);
    return 0;
}
