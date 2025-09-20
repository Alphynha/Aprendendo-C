// Importando bibliotecas padrão
#include <stdio.h>
#include <stdlib.h>

// Importando bibliotecas locais
#include ".\bibliotecas\aritmetica.h"

int main() {

    int n1, n2, resultado;
    char ch;
    printf ("Digite uma operacao matematica (+ | - | * | /): ");
    ch = getchar();
    printf("Digite 2 numeros: ");
    scanf("%d %d", &n1, &n2);

    switch (ch) {
        case '+':
            resultado = soma(n1, n2); 
            break;

        case '-':
            resultado = subtracao(n1, n2);
            break;

        case '*':
            resultado = multiplicacao(n1, n2);
            break;

        case '/':
            resultado = divisao(n1, n2);
            break;

        default:
            printf("Você digitou uma opção inválida\n");

    }

    printf("Resultado = %d\n", resultado);

    system("pause");
    return 0;
}