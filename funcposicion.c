#include"proyecto.h"
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

FILE* datos;
datos=fopen("datos.txt", "r");
fscanf(datos, "%f,",&xi, &vxi,)
float posicion(float xi, float h, float vxi, float fxi);

{
float x;
		x=xi+(h*vxi)+((1/2)*fxi*(pow(h,2)));
return x;
}
