#include <stdio.h>

int main(){

char nome[50];
printf("digite um nome: ");
scanf("%49s\n", &nome);

printf("ola! %s", nome);

return 0;
}
