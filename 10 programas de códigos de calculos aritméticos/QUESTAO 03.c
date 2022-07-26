#include <stdio.h>
#include <math.h>

//QUESTAO 03 - FACA UM PROGRAMA QUE LEIA UM NUMERO QUALQUER E IMPRIMA O SEU CUBO.

int main ()
{
int numero, cubo;

printf("\tLeia um numero qualquer e imprima o seu cubo");

printf("\nInsira um numero: ", numero);
scanf("%d", &numero);

cubo = pow(numero,3);

printf("\nO cubo de %d e igual a %d", numero, cubo);

return 0;
}
