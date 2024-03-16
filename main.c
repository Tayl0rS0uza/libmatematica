#include "matematica.h"
#include <stdio.h>

int main(){

    float angulo = 1.0472;   // 60 graus em radianos // 

    printf("O seno de um angulo de 90 graus eh: %.2f\n", calcular_seno(angulo));
    printf("O cosseno de um angulo de 90 graus eh: : %.2f\n", calcular_cosseno(angulo));
    printf("A tangente de um angulo de 90 graus eh: : %.2f\n", calcular_tangente(angulo));

    return 0;
}