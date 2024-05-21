#include<stdio.h>
#define TAM 10
int main(){

    for(int i =0; i < TAM; i++){
        char nome[20];
        int idade, altura;
        printf("QUAL SEU NOME? \n");
        scanf("%s ", &nome );

        printf("QUAL SUA IDADE ?");
        scanf("%d", &idade);

        printf("QUAL SUA ALTURA?");
        scanf("%d", &altura);


    }
}