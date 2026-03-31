#include <stdio.h>
int main() {
float x, y;
printf("Digite o primeiro numero: ");
scanf("%f", &x);
printf("Digite o segundo numero: ");
scanf("%f", &y);

printf("soma: %.2f\n", x + y);
printf("sub: %.2f\n", x - y);
printf("multi: %.2f\n", x * y);


return 0;
}
