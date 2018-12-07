#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int main()
{
int num;
FILE* datos;
datos=fopen("cooresferas.txt", "w");
srand(time(NULL));
num=rand()%51;
fprintf(datos, "%d\n", num);
fclose(datos);
return 0;

}
