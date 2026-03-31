#include <stdio.h>
#include <locale.h>

int main(){

char produto[50];
float preco;

printf("digite o nome do produto: \n");
scanf("%49s", produto);

printf("digite o preco do produto: \n");
scanf("%.2f", &preco);

printf("nome do produto: %s\n", produto);
printf("valor do produto: %f\n", preco);

return 0;
}
