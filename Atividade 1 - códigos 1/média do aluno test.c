#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main (){
setlocale(LC_ALL, "portuguese");
float n1, n2, n3, n4;
float media;
char nome[20];

printf("usu�rio, digite o seu nome completo, por favor: ");
gets(nome);

printf("digite a sua primeira nota: ");
scanf("%f", &n1);

printf("digite a sua segunda nota: ");
scanf("%f", &n2);

printf("digite a sua terceira nota: ");
scanf("%f", &n3);

printf("digite a sua quarta nota: ");
scanf("%f", &n4);

media=(n1+n2+n3+n4)/4;

printf("%s, sua primeira nota � %.2f\nsua segunda nota � %.2f\nsua terceira nota � %.2f\nsua quarta nota � %.2f\n ", nome, n1, n2, n3, n4);
printf("%s, a sua m�dia entre as quatro notas � de: %.2f", nome, media);

if(media>6){
printf("\nparab�ns, voc� foi aprovado!! chupa meu pau");

}else{
    printf("\nSE FUDEUKKKKKKKKKKKK ARROMBADO, REPROVOU!!!");
}
getch();
return 0;
}
