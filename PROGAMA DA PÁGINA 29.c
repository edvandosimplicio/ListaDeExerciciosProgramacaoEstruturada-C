int main()
{
int cargo;
float sal, nsal;
printf("Empresa Legal\n\n\n");
printf("Cargo(1-Gerente/2-Engenheiro/3-Tecnico): ");
scanf("%d", &cargo);
printf("\nSalario atual: ");
scanf("%f", &sal);
switch (cargo)
{ case 1: nsal=sal*1.1; break;
case 2: nsal=sal*1.2; break;
case 3: nsal=sal*1.3; break;
default: printf("\n\nCargo Invalido!\n");
break;
}
if ((cargo>=1) && (cargo<=3))
{ printf("\n\n_________________________\n");

printf("\n\nResultados\n\n");
printf("\nSalario Antigo..............: R$%.2f\n", sal);
printf("\nSalario Novo................: R$%.2f\n", nsal);
printf("\nDiferenca de Salarios: R$%.2f\n",nsal - sal);
}
getche();
}
