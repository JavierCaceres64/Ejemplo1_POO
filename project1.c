#include <stdio.h>
int main(){
float num1, num2, promedio;

do{
printf("Ingrese la primera nota: ");
scanf("%f",&num1);
}while (num1<0||num1>20);
do{
printf("Ingrese la segunda nota: ");
scanf("%f",&num2);
}while(num2<0||num2>20);
promedio=(num1+num2)/2;

if (promedio <11){
    printf("Su promedio es: %.2f, reprobo.\n",promedio);
} else if (promedio < 14){
    printf("Su nota es: %.2f,va a supletorio.\n", promedio );
    }
else{
    printf("Su promedio es: %.2f, aprobo.\n", promedio);
return 0;
} }
