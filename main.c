// Importando bibliotecas padrão
#include <stdio.h>
#include <stdlib.h>

// Importando bibliotecas locais
#include ".\bibliotecas\aritmetica.h"

int main() {

    /*
    // Variáveis Inteiras:
    int a = 50; // Variável inteira em Decimal
    int b = 050; // Variável inteira em Octal
    int c = 0x50; // Variável inteira em Hexadecimal
    printf("Em decimal: %d | Em Octal: %d | Em Hexadecimal: %d\n", a, b, c);

    */
    
    // Declarando variáveis do tipo inteiro
    int n1, n2, resultado;

    // Declarando varíavel do tipo char
    char ch;

    // Solicitando entrada do tipo char para usuario
    printf ("Digite uma operacao matematica (+ | - | * | /): ");
    ch = getchar();

    //Switch-Case
        switch (ch) {
            case '+':
                printf("Digite o primeiro numero: ");
                scanf("%d", &n1);
                printf("Digite o segundo numero: ");
                scanf("%d", &n2);

                printf("O resultado eh: %d\n", n1 + n2); 
                break;

            case '-':
                printf("Digite o primeiro numero: ");
                scanf("%d", &n1);
                printf("Digite o segundo numero: ");
                scanf("%d", &n2);

                printf("O resultado eh: %d\n", n1 - n2);
                break;

            case '*':
                printf("Digite o primeiro numero: ");
                scanf("%d", &n1);
                printf("Digite o segundo numero: ");
                scanf("%d", &n2);

                printf("O resultado eh: %d\n", n1 * n2);
                break;

            case '/':
                printf("Digite o primeiro numero: ");
                scanf("%d", &n1);
                printf("Digite o segundo numero: ");
                scanf("%d", &n2);

                printf("O resultado eh: %d\n", n1 / n2);
                break;
            
            default:
                printf("Valor digitado eh invalido! Encerrando programa!\n");
        }

    system("pause");
    return 0;
}