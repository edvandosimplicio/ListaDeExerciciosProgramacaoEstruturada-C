#include <stdio.h>
#include <math.h>

int main (){

int segundos, minutos, horas;

printf("Insira o tempo de duracao do evento em segundos: ");
scanf("%d",&segundos);

horas=segundos/3600;
minutos=(segundos-(horas*3600))/60;
segundos=segundos-(horas*3600)-(minutos*60);

printf("A duracao do evento e de %d horas, %d minutos e %d segundos", horas, minutos, segundos);

return 0;
}
