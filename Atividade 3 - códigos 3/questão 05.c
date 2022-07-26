#include <stdio.h>

int faltam_meses(){

int meses_ano=12, mes_atual, falta_mes;

printf("\ndigite o mes atual: ");
scanf("%d", &mes_atual);
falta_mes=meses_ano-mes_atual;
return falta_mes;}

int main(){

int meses_faltam;
printf("quantos meses faltam pro ano acabar?\n");
meses_faltam=faltam_meses();

if(meses_faltam==1){printf("falta %d mes pro ano acabar!", meses_faltam);
}else{printf("faltam %d meses pro ano acabar!", meses_faltam);}
return 0;
}
