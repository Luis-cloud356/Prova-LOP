#include <stdio.h> 

struct Pessoa{
    char nome[50];
    int idade;
};

int main(){
    struct Pessoa p;
    printf("Digite o nome: ");
    scanf("%[^\n]",p.nome);
    printf("Digite sua idade: ");
    scanf("%d",&p.idade);
    
    printf("Nome: %s\n",p.nome);
    printf("Idade: %d\n",p.idade);
    
    return 0;
}