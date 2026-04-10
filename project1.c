#include <stdio.h>
int main(){
float n1, n2, prom;

do{
printf("Ingrese la primera nota: ");
scanf("%f",&n1);
}while (n1<0||n1>20);
do{
printf("Ingrese la segunda nota: ");
scanf("%f",&n2);
}while(n2<0||n2>20);
prom=(n1+n2)/2;

if (prom <11){
    printf("Su promedio es: %.2f, reprobo.\n",prom);
} else if (prom < 14){
    printf("Su nota es: %.2f,va a supletorio.\n", prom);
    }
else{
    printf("Su promedio es: %.2f, aprobo.\n", prom);
return 0;
} }
