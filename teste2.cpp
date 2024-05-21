#include<stdio.h>
#define TAM 10


struct Pessoa{
    char nome[20];
    int idade, altura;
    char mora;


}

    /* data */
};

int main(){

    struct Pessoa pessoas;

    for(int i =0; i < TAM; i++){
        
        printf("QUAL SEU NOME ?\n");
        scanf("%s", &pessoas[i].nome);

        printf("QUAL SUA IDADE ? \n");
        scanf("%d", &pessoas[i].idade);

        printf("QUAL SUA ALTURA ? \n ");
        scanf("%d ", &pessoas[i].altura);
        



    }
}