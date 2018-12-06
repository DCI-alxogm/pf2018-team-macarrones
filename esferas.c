#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{

int crea (int M){
int pos=rand();
pos%=2;
int num=rand();
int rest=num/(M*10000);
num-=rest*(M*10000);
num /=10000;
return num;
}
}
