#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char banda[30];
    int ano;
    int genero, id;
    int qntestoque, quantidade;
    float valor;
    
}CD;

CD cds[8];

int numCd = 0;

void cadastrarCd();
void vendaCd();
void pesquisarCd();
void unidadesDisponiveis();

int main(){
     int opcao;
   
   
    do {
       printf("**** Locadoura ****\n");
       printf("1 - Cadastrar CD\n");
       printf("2 - Venda CD\n");
       printf("3 - Pesquisar CD\n");
       printf("4 - Unidades disponiveis\n");
       printf("0 - Sair\n");
       printf("Selecione uma opcao : ");
       
       
       scanf("%d", &opcao);
        system("clear");
   
    
    
       switch(opcao){
           case 1:
           cadastrarCd();
           break;
           case 2:
           vendaCd();
           break;
           case 3:
           pesquisarCd();
           break;
           case 4:
           unidadesDisponiveis();
           case 0:
           printf("Obrigado !\n");
           break;
           default:
           printf("Opcao Invalida !\n");
       }
       
       
        printf("Enter para continuar ...");
    getchar();
    getchar();
    system("clear");
    }while(opcao != 0);

    return 0;
    
}

void cadastrarCd (){
    float valor = 0;
    
    printf("--- Nova Venda ---\n");
    printf("Digite o id do Cd: \n");
    printf("Nome do CD :\n");
    scanf("%s", cds[numCd].banda);
    printf("Ano:\n");
    scanf("%d", &cds[numCd].ano);
    printf("Genero :\n");
    scanf("%d", &cds[numCd].genero);
    printf("Quantidade estoque:\n");
    scanf("%d", &cds[numCd].qntestoque);
    printf("Valor:\n");
    scanf("%f", &cds[numCd].valor);
    numCd++;
}

void vendaCd(){
    float valorCompra = 0;
    int quantidade,estoque;
    printf("--- Vendas Cadastradas ---\n");
    for(int i = 0; i < numCd; i++){
        printf("Produto : %s\n", cds[i].banda);
        printf("Valor : %.2f\n", cds[i].valor);
        printf("Quantidade : %d\n",cds[i].quantidade);
        valorCompra = cds[i].valor * cds[i].quantidade;
        estoque= quantidade - cds[i].qntestoque; 
        printf("\033[32m");
        printf("Valor da Compra : R$ %.2f\n", valorCompra);
        printf("\033[0m");
        printf("----------------------\n");
        valorCompra = 0;
        
    }
}

void pesquisarCd(){
    printf("--- Pesquisar Cd ---\n");
    for(int i = 0; i < numCd; i++){
        printf("Nome do Cd : %s\n", cds[i].banda);
        printf("Ano: %d\n", cds[i].ano);
        printf("Genero: %d\n",cds[i].genero);
        printf("Quantidade estoque: %d\n",cds[i].qntestoque);
        printf("Valor: %.2f\n",cds[i].valor);
        
    }
}

void unidadesDisponiveis(){
//   for(int i = 0; i < numCd; i++){
//         printf("Produto : %s\n", cds[i].banda);
//         printf("Ano: %d\n",cds[i].ano);
//           printf("Genero: %d\n",cds[i].genero);
//           printf("Quantidade estoque: %d\n",cds[i].qntestoque);
//        printf("Valor : %.2f\n", cds[i].valor);
}