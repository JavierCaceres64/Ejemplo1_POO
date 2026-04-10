#include <stdio.h>
int main(){
<<<<<<< HEAD
float n1, n2, prom;
=======
float num1, num2,num3, promedio;
>>>>>>> rama1

do{
printf("Ingrese la primera nota: ");
scanf("%f",&n1);
}while (n1<0||n1>20);
do{
printf("Ingrese la segunda nota: ");
<<<<<<< HEAD
scanf("%f",&n2);
}while(n2<0||n2>20);
prom=(n1+n2)/2;
=======
scanf("%f",&num2);
}while(num2<0||num2>20);
do{
printf("Ingrese la tercera nota: ");
scanf("%f",&num3);
}while(num3<0||num3>20);

promedio=(num1+num2+num3)/3;
>>>>>>> rama1

if (prom <11){
    printf("Su promedio es: %.2f, reprobo.\n",prom);
} else if (prom < 14){
    printf("Su nota es: %.2f,va a supletorio.\n", prom);
    }
else{
    printf("Su promedio es: %.2f, aprobo.\n", prom);
return 0;
} }
