#include <stdio.h> 

struct Aluno{
   char nome[50];
   int idade;
   float nota;
};

  struct  Aluno alunos[3];
    
    void listarAlunos();
    
    void listarAlunos(){
        for(int i = 0;i < 3;i++){
            printf("Aluno:\n");
            printf("Nome: %s\n", alunos[i].nome);
            printf("Idade: %d\n", alunos[i].idade);
            printf("Nota: %.2f\n", alunos[i].nota);
        }
    }
    
    int main(){
        for(int i = 0; i < 3; i++){
            printf("Digite os dados do aluno : \n");
            printf("Nome: \n");
            scanf("%s",alunos[i].nome);
            printf("Idade:\n ");
            scanf("%d",&alunos[i].idade);
            printf("Nota: \n");
            scanf("%f",&alunos[i].nota);
        }
        
         listarAlunos();
        
        
        return 0;
    }