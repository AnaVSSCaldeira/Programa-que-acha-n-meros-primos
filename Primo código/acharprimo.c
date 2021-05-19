#include <stdio.h>

void verificanum(int *a,int *b){//verifica se comeca do menor para o maior numero
    while(*a>*b){
        printf("\nPrimeiro numero maior que o anterior. Digite novamente:\n");
        printf("Numero de comeco: ");
        scanf("%d",&(*a));
        printf("Numero de fim: ");
        scanf("%d",&(*b));
    }
    printf("Numeros correspondem a regra estabelecida.\n\n");
    return;
}
int acharprimo(int a,int b){//acha os numeros primos
    int i,primo=0;
    printf("Numeros primos encontrados: ");
    for(i=a;i<=b;i++){
        //numeros primos sao numeros que so dividem por um ou ele mesmo.
        if(i==2 || i==3 || i==5 || i==7 || (i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0)){
        primo++;
        printf("%d ",i);
    }
    }
    return primo;
}

int main(void) {
    int n1,n2;//numeros para o usuário digitar
    int cont;//contador de números primos
    printf("Digite um numero para comecar: ");
    scanf("%d",&n1);
    printf("Agora, digite um numero para terminar: ");
    scanf("%d",&n2);
    verificanum(&n1,&n2); //verifica se o primeiro é menor que o segundo
    cont=acharprimo(n1,n2);//acha os numeros primos entre o intervalo e retorna a quantidade de números primos achados
    printf("\nPossue(m) %d numero(s) primo(s) entre %d e %d.",cont,n1,n2);
    return 0;
}