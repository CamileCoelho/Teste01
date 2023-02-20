#include <stdio.h>
#include <stdlib.h>

int main() {
    float lado1, lado2, lado3;
    int opcao;
    
    do {
        opcao = 2;
        do {
            printf("Digite o comprimento do primeiro lado do triangulo: ");
            if (scanf("%f", &lado1) != 1 || lado1 <= 0) {
                printf("Valor invalido. Por favor, digite um numero positivo e maior que zero.\n");
                while (getchar() != '\n'); 
            }
        } while (lado1 <= 0);

        do {
            printf("Digite o comprimento do segundo lado do triangulo: ");
            if (scanf("%f", &lado2) != 1 || lado2 <= 0) {
                printf("Valor invalido. Por favor, digite um numero positivo e maior que zero.\n");
                while (getchar() != '\n'); 
            }
        } while (lado2 <= 0);
    
        do {
            printf("Digite o comprimento do terceiro lado do triangulo: ");
            if (scanf("%f", &lado3) != 1 || lado3 <= 0) {
                printf("Valor invalido. Por favor, digite um numero positivoe maior que zero.\n");
                while (getchar() != '\n'); 
            }
        } while (lado3 <= 0);

        if (lado1 >= lado2 + lado3 || lado2 >= lado1 + lado3 || lado3 >= lado1 + lado2) {
        printf("Triangulo Invalido\n");
        }
        else{    
        printf("Triangulo Valido\n");
        if (lado1 == lado2 && lado2 == lado3) {
            printf("Triangulo Equilatero\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("Triangulo Isosceles\n");
        } else {
            printf("Triangulo Escaleno\n");
        }
        }
        
        while (opcao != 0 && opcao != 1) {
            printf("Digite 1 caso queira continuar, ou 0 para sair: ");
            scanf("%d", &opcao);
            while (getchar() != '\n'); 
            if (opcao != 0 && opcao != 1) {
                printf("Opcao invalida! Tente novamente.\n");
            }
        }
        if (opcao == 0) {
            printf("Bye bye!\n");
        } else {
            printf("Continuando...\n");
        }
    } while(opcao == 1);

    return 0;
}


