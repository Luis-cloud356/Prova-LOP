#include <stdio.h> 
#include <locale.h>

int main(){
     int numeros[10], par = 0;
    int i;
    
    printf("Digite 10 números:\n");
    for(i=0;i<10;i++){
        scanf("%d", &numeros[i]);
    if(numeros[i]%2==0){
        par++;
    }
    
    }
    printf("Os números pares são: %d\n",par);
    
    return 0;
}