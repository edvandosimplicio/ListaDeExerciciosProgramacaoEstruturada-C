#include <stdio.h>

int valormenor(){
int n1, n2, n3, resultado;

printf("\ndigite o numero 1: ");
scanf("%d", &n1);

printf("\ndigite o numero 2: ");
scanf("%d", &n2);

printf("\ndigite o numero 3: ");
scanf("%d", &n3);

if(n1<n2&&n1<n3){
resultado=n1;
}else if (n2<n1&&n2<n3){
resultado=n2;
}else{
resultado=n3;}
return resultado;}
int main(){
int menor_valor;
printf("menor valor digitado pelo usuario");
menor_valor=valormenor();
printf("\no menor valor digitado pelo usuario foi %d", menor_valor);

return 0;}
