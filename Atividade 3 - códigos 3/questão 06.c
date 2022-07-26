#include <stdio.h>

int dias_acabar_mes(){

int dia, mes, ano, dias_mes;

printf("Informe o ano: ");
scanf("%d", &ano);
printf("Informe o mes atual: ");
scanf("%d", &mes);
printf("Informe o dia atual: ");
scanf("%d", &dia);
if(mes==4||mes==6||mes==9||mes==11){
dias_mes=30;
}else if(mes==2){
if((ano%4==0&&ano%100!=0)||ano%400==0){
dias_mes=29;
}else{
dias_mes=28;}
}else{
dias_mes = 31;}
dias_mes-=dia;
return dias_mes;}

int main(){

int dias_faltam_mes_acabar;

printf("programa para saber quantos dias falta para acabar o mes\n");
dias_faltam_mes_acabar=dias_acabar_mes();
printf("faltam %d dias para acabar o mes", dias_faltam_mes_acabar);

return 0;
}
