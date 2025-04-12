#include <stdio.h>
#include <math.h>

float a, b, c;
float delta, resultado

 int main(){

printf("digite valores para A, B e C\n");
scanf("%f", &a);
scanf("%f", &b);
scanf("%f", &c);

delta = (b * 4 * a * c);

resultado = (b^2 + delta^(1 / 2) / 2 * a);

printf("Valor da Bhaskara e: %2.f resultado\n", resultado);

}




