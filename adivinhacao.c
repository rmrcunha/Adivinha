#include <stdio.h>
#define NUMERO_DE_TENTATIVAS 3

int main() {
    printf("****************************************\n");
    printf ("*Bem vindo ao nosso jogo de adivinhação*\n");
    printf("****************************************\n");

    int numerosecreto = 42;

    int chute;
    int tentativa = 1;
    while (1){

        printf("Tentativa %d\n", tentativa);
        printf("Qual é o seu chute?");

        scanf("%d", &chute);
        printf("Seu chute foi %d", chute);

        if(chute < 0){
            printf("Você não pode chutar números negativos");

            continue;
        }

        int acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;

        if(acertou){
            printf("Parabéns! Você acertou!\n");
            printf("Jogue novamente!");

            break;
        }
        else if(maior){
            printf("Seu chute foi maior que o número secreto.\n");
        }

        else{
            printf("Seu chute foi menor que o número secreto.\n");
        }
        tentativa++;
    }

    printf("Fim de jogo!\n");
    printf("Você terminou o jogo em %d tentativas", tentativa-1);
}