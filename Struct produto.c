#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome [30];
    float valor;
    int qntestoque;
} Produto;

Produto produtos[10];

int numProduto = 0;

void cadastrarProduto();
void visualizarInformacoes();
void realizarCompra();

int main()
{
    int opcao;
   
   
    do {
       printf("**** Mercado ****\n");
       printf("1 - Cadastrar Produto\n");
       printf("2 - Visualizar Informacoes\n");
       printf("3 - Realizar Compra\n");
       printf("0 - Sair\n");
       printf("Selecione uma opcao : ");
       
       
       scanf("%d", &opcao);
        system("clear");
   
    
    
       switch(opcao){
           case 1:
           cadastrarProduto();
           break;
           case 2:
           visualizarInformacoes();
           break;
           case 3:
           realizarCompra();
           break;
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

void cadastrarProduto (){
    
    printf("--- Nova Venda ---\n");
    printf("Nome do Produto :");
    scanf("%s", produtos[numProduto].nome);
    printf("Valor :");
    scanf("%f", &produtos[numProduto].valor);
    printf("Estoque :");
    scanf("%d", &produtos[numProduto].qntestoque);
    numProduto++;
    
}

void visualizarInformacoes(){
    printf("--- Informacoes Visualizadas ---\n");
    for(int i = 0; i < numProduto; i++){
        printf("Produto : %s\n", produtos[i].nome);
        printf("Valor : %.2f\n", produtos[i].valor);
        printf("Quantidade : %d\n",produtos[i].qntestoque);
        
        
    }
}
    
void realizarCompra(){
        printf("---- Realizar Compra ----\n");
        float valorCompra = 0;
        int quantidade, estoque;
        printf("Quantidade:");
        scanf("%d", &quantidade);
        for(int i = 0; i < numProduto; i++){
            valorCompra = produtos[i].valor * quantidade;
            estoque = quantidade - produtos[i].qntestoque;
        printf("\033[32m");
        printf("Valor da Compra : R$ %.2f\n", valorCompra);
        printf("\033[0m");
        printf("O estoque é : %d\n", produtos[i].qntestoque);
        printf("----------------------\n");
        valorCompra = 0;
        }
        
    }
    
