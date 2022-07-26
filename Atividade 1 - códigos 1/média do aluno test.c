#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main (){
setlocale(LC_ALL, "portuguese");
float n1, n2, n3, n4;
float media;
char nome[20];

printf("usuário, digite o seu nome completo, por favor: ");
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

printf("%s, sua primeira nota é %.2f\nsua segunda nota é %.2f\nsua terceira nota é %.2f\nsua quarta nota é %.2f\n ", nome, n1, n2, n3, n4);
printf("%s, a sua média entre as quatro notas é de: %.2f", nome, media);

if(media>6){
printf("\nparabéns, você foi aprovado!! chupa meu pau");

}else{
    printf("\nSE FUDEUKKKKKKKKKKKK ARROMBADO, REPROVOU!!!");
}
getch();
return 0;
}
